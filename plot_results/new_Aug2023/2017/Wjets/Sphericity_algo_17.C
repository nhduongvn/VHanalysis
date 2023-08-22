void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Tue Aug 22 09:21:54 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-127.0622,1.133333,1143.56);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,968.0932);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,777.6524);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,523.521);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,249.8891);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,150.553);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,51.79981);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,15.70288);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,4.864877);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,2.781927);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,1.557034);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,1.368893);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,0.3996189);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.486246);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(14,0.4648195);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.03770008);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.01238512);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.1493894);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(19,0.1763277);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,33.62308);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,30.32684);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,28.19986);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,16.51006);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,14.96036);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,4.796936);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,2.693476);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,1.509236);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,0.8638204);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,1.266955);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,0.9325911);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,0.1916401);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.2261154);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(14,0.4257899);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.03770008);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.01238512);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.1493894);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(19,0.1763277);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(15759);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->Draw("HIST");
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
