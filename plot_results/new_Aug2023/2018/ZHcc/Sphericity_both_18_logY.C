void Sphericity_both_18_logY()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Tue Aug 22 09:18:47 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-3.336256,1.133333,-0.9712349);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLogy();
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_11 = new TH1D("VbbHcc_both_Sphericity_stack_11","",25,0,1);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(1,0.03271253);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(2,0.0277766);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(3,0.01103771);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(4,0.02887563);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(5,0.01566976);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(6,0.01732371);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(7,0.01378266);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(8,0.004474608);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(9,0.008436625);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(10,0.01003552);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(11,0.007023324);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(14,0.004400037);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(16,0.001589558);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(17,0.004895125);
   VbbHcc_both_Sphericity_stack_11->SetBinContent(18,0.002241271);
   VbbHcc_both_Sphericity_stack_11->SetBinError(1,0.008547376);
   VbbHcc_both_Sphericity_stack_11->SetBinError(2,0.008184266);
   VbbHcc_both_Sphericity_stack_11->SetBinError(3,0.005044775);
   VbbHcc_both_Sphericity_stack_11->SetBinError(4,0.008396482);
   VbbHcc_both_Sphericity_stack_11->SetBinError(5,0.005982134);
   VbbHcc_both_Sphericity_stack_11->SetBinError(6,0.006631322);
   VbbHcc_both_Sphericity_stack_11->SetBinError(7,0.005664388);
   VbbHcc_both_Sphericity_stack_11->SetBinError(8,0.00316472);
   VbbHcc_both_Sphericity_stack_11->SetBinError(9,0.004386299);
   VbbHcc_both_Sphericity_stack_11->SetBinError(10,0.00511271);
   VbbHcc_both_Sphericity_stack_11->SetBinError(11,0.004057405);
   VbbHcc_both_Sphericity_stack_11->SetBinError(14,0.003119572);
   VbbHcc_both_Sphericity_stack_11->SetBinError(16,0.001589558);
   VbbHcc_both_Sphericity_stack_11->SetBinError(17,0.003671149);
   VbbHcc_both_Sphericity_stack_11->SetBinError(18,0.002241271);
   VbbHcc_both_Sphericity_stack_11->SetEntries(84);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Sphericity_stack_11->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
