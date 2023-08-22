void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Tue Aug 22 09:21:54 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-516.0097,1.133333,4644.087);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,3931.502);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,3620.744);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,2065.278);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,1250.279);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,639.9776);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,277.3223);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,88.15756);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,27.76677);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,6.61281);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,3.000235);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,4.329841);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,7.57321);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,0.8256022);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,0.561778);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,0.409581);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,0.2215735);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.3639387);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,1.558226);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,53.8156);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,53.41571);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,40.47667);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,30.07137);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,20.39013);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,13.39681);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,6.624438);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,3.030052);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.324333);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,0.8061422);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,1.134286);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,5.788347);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.3414778);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.2560095);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,0.2061864);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,0.1586091);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.2893377);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,1.208779);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(53670);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_18->Modified();
   Sphericity_algo_18->cd();
   Sphericity_algo_18->SetSelected(Sphericity_algo_18);
}
