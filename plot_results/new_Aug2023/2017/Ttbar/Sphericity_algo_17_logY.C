void Sphericity_algo_17_logY()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Tue Aug 22 09:17:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-2.464882,1.133333,5.86971);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLogy();
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,53943.99);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,57372.23);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,30777.44);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,16787.6);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,8870.435);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,4246.629);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,1849.218);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,800.7371);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,379.6735);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,202.477);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,117.2626);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,70.24666);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,44.93412);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,28.96786);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,20.62796);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,12.7125);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,9.970911);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,5.376479);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,3.354587);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,1.302353);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,0.4419498);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.1265952);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(23,0.05976038);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(24,0.04673127);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,58.65184);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,60.38888);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,44.22223);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,32.75648);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,23.85623);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,16.41872);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,10.67646);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,6.885701);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,4.657253);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,3.351735);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,2.525003);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,1.925099);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,1.52324);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,1.20224);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.021569);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,0.8030321);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,0.717984);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.5375525);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.4196723);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.2563284);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.155417);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.07807177);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(23,0.04309818);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(24,0.04673127);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(3114170);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_3->Draw("HIST");
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
