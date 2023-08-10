void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:24:18 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-74406.54,1.133333,669658.9);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,566907);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,533821.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,282515.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,171085.7);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,81649.93);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,35200.53);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,8060.874);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,3565.601);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,1296.472);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,539.1404);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,647.3046);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,146.7338);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,98.06819);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,94.74647);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,38.60203);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,341.2314);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,36.53424);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,14.01307);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,22.4309);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,10.95014);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,23047.16);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,23966.6);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,7091.18);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,17540.52);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,3702.625);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,2967.318);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,1036.986);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,816.3793);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,422.1963);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,200.608);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,354.1298);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,52.53831);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,34.10319);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,41.01761);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,21.4347);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,295.788);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,14.3098);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,6.440881);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,18.44565);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,7.915757);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(112106);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
