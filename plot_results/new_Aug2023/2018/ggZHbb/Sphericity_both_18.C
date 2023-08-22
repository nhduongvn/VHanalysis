void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Tue Aug 22 09:23:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-0.4898224,1.133333,4.408401);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,3.445943);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,3.73198);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,2.756454);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,2.150841);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,1.87453);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,1.493531);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,1.247359);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,1.100301);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,0.9322393);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,0.8103753);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.6967349);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.5969254);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.505268);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.4421769);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.3577916);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.305394);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.2125311);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.1558425);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.09433985);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.04595033);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.008785699);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.003290287);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.0005004825);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.04405363);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.04551812);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.03921471);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.034657);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.03238374);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.02892198);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.02640094);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.02477793);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.02288242);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.02129872);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.01975979);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.01827581);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.01686578);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.01577425);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.01414435);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.01301698);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.01094339);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.009290046);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.007165916);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.004993075);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.002159055);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.001349477);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.0005004825);
   VbbHcc_both_Sphericity_stack_10->SetEntries(41891);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->Draw("HIST");
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
