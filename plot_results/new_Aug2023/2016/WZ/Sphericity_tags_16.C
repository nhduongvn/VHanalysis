void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Tue Aug 22 09:20:42 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-0.1604801,1.133333,1.444321);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_7 = new TH1D("VbbHcc_tags_Sphericity_stack_7","",25,0,1);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(1,1.127488);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(2,1.222706);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(3,0.268744);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(4,0.6530999);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(5,0.183314);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(6,0.09227263);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(7,0.265187);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(9,0.09988796);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(12,0.07873842);
   VbbHcc_tags_Sphericity_stack_7->SetBinContent(14,0.07699256);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(1,0.314259);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(2,0.3407659);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(3,0.1559111);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(4,0.2471744);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(5,0.1296239);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(6,0.09227263);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(7,0.1532356);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(9,0.09988796);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(12,0.07873842);
   VbbHcc_tags_Sphericity_stack_7->SetBinError(14,0.07699256);
   VbbHcc_tags_Sphericity_stack_7->SetEntries(45);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Sphericity_stack_7->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
