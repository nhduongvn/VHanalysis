void H_dPhi_algo_18_logY()
{
//=========Macro generated from canvas: H_dPhi_algo_18/H_dPhi_algo_18
//=========  (Tue Aug 22 09:17:15 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_algo_18 = new TCanvas("H_dPhi_algo_18", "H_dPhi_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_algo_18->SetHighLightColor(2);
   H_dPhi_algo_18->Range(-0.8,-1.019753,4.533333,0.7152962);
   H_dPhi_algo_18->SetFillColor(0);
   H_dPhi_algo_18->SetBorderMode(0);
   H_dPhi_algo_18->SetBorderSize(2);
   H_dPhi_algo_18->SetLogy();
   H_dPhi_algo_18->SetLeftMargin(0.15);
   H_dPhi_algo_18->SetFrameBorderMode(0);
   H_dPhi_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dPhi_stack_6 = new TH1D("VbbHcc_algo_H_dPhi_stack_6","",120,0,4);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(0,19.34179);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(1,1.170439);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(3,1.837564);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(10,0.5520734);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(11,0.555095);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(16,1.377641);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(17,0.6017025);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(18,1.529605);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(20,0.6225638);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(21,1.009434);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(22,1.455056);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(23,0.7240563);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(25,0.7568679);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(34,0.5588237);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(38,0.7083392);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(41,1.087348);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(45,0.75047);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(49,0.6076863);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(52,1.103444);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(54,0.5430975);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(60,0.7561791);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(62,0.7643472);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(63,0.5574209);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(69,0.4321114);
   VbbHcc_algo_H_dPhi_stack_6->SetBinContent(71,0.2849587);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(0,4.166921);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(1,0.8281495);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(3,1.075546);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(10,0.5520734);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(11,0.555095);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(16,0.99044);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(17,0.6017025);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(18,1.081937);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(20,0.6225638);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(21,0.7433162);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(22,1.455056);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(23,0.7240563);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(25,0.7568679);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(34,0.5588237);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(38,0.7083392);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(41,0.7694037);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(45,0.75047);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(49,0.6076863);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(52,0.7913252);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(54,0.5430975);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(60,0.7561791);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(62,0.7643472);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(63,0.5574209);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(69,0.4321114);
   VbbHcc_algo_H_dPhi_stack_6->SetBinError(71,0.2849587);
   VbbHcc_algo_H_dPhi_stack_6->SetEntries(60);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dPhi_stack_6->SetFillColor(ci);
   VbbHcc_algo_H_dPhi_stack_6->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_algo_H_dPhi_stack_6->GetXaxis()->SetRange(1,120);
   VbbHcc_algo_H_dPhi_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dPhi_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dPhi_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dPhi_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dPhi_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dPhi_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dPhi_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dPhi_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dPhi_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dPhi_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dPhi_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dPhi_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dPhi_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dPhi_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_algo_18->Modified();
   H_dPhi_algo_18->cd();
   H_dPhi_algo_18->SetSelected(H_dPhi_algo_18);
}
