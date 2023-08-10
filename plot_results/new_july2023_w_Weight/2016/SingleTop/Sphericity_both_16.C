void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Thu Aug 10 12:25:06 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-16.65607,1.133333,149.9046);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_2 = new TH1D("VbbHcc_both_Sphericity_stack_2","",25,0,1);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(1,125.3557);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(2,126.9034);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(3,107.3724);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(4,73.66616);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(5,59.43304);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(6,43.07896);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(7,35.75239);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(8,34.71067);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(9,29.53764);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(10,24.29679);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(11,18.16665);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(12,16.80112);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(13,18.09669);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(14,9.974007);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(15,11.32041);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(16,9.786179);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(17,4.428837);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(18,5.313081);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(19,2.360044);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(20,0.9881289);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(21,0.5233442);
   VbbHcc_both_Sphericity_stack_2->SetBinContent(23,0.04501684);
   VbbHcc_both_Sphericity_stack_2->SetBinError(1,4.777008);
   VbbHcc_both_Sphericity_stack_2->SetBinError(2,4.642292);
   VbbHcc_both_Sphericity_stack_2->SetBinError(3,4.389381);
   VbbHcc_both_Sphericity_stack_2->SetBinError(4,3.669743);
   VbbHcc_both_Sphericity_stack_2->SetBinError(5,3.346647);
   VbbHcc_both_Sphericity_stack_2->SetBinError(6,2.750076);
   VbbHcc_both_Sphericity_stack_2->SetBinError(7,2.576366);
   VbbHcc_both_Sphericity_stack_2->SetBinError(8,2.542311);
   VbbHcc_both_Sphericity_stack_2->SetBinError(9,2.348341);
   VbbHcc_both_Sphericity_stack_2->SetBinError(10,2.165446);
   VbbHcc_both_Sphericity_stack_2->SetBinError(11,1.777802);
   VbbHcc_both_Sphericity_stack_2->SetBinError(12,1.821178);
   VbbHcc_both_Sphericity_stack_2->SetBinError(13,1.961385);
   VbbHcc_both_Sphericity_stack_2->SetBinError(14,1.394195);
   VbbHcc_both_Sphericity_stack_2->SetBinError(15,1.579453);
   VbbHcc_both_Sphericity_stack_2->SetBinError(16,1.450471);
   VbbHcc_both_Sphericity_stack_2->SetBinError(17,0.8969541);
   VbbHcc_both_Sphericity_stack_2->SetBinError(18,1.05402);
   VbbHcc_both_Sphericity_stack_2->SetBinError(19,0.6532364);
   VbbHcc_both_Sphericity_stack_2->SetBinError(20,0.4407362);
   VbbHcc_both_Sphericity_stack_2->SetBinError(21,0.3297822);
   VbbHcc_both_Sphericity_stack_2->SetBinError(23,0.04501684);
   VbbHcc_both_Sphericity_stack_2->SetEntries(9807);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
