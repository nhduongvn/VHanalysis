void H_mass_algo_17_logY()
{
//=========Macro generated from canvas: H_mass_algo_17/H_mass_algo_17
//=========  (Tue Aug 22 09:16:54 2023) by ROOT version 6.14/09
   TCanvas *H_mass_algo_17 = new TCanvas("H_mass_algo_17", "H_mass_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_algo_17->SetHighLightColor(2);
   H_mass_algo_17->Range(-80,-1.184283,453.3333,0.6545008);
   H_mass_algo_17->SetFillColor(0);
   H_mass_algo_17->SetBorderMode(0);
   H_mass_algo_17->SetBorderSize(2);
   H_mass_algo_17->SetLogy();
   H_mass_algo_17->SetLeftMargin(0.15);
   H_mass_algo_17->SetFrameBorderMode(0);
   H_mass_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_mass_stack_6 = new TH1D("VbbHcc_algo_H_mass_stack_6","",40,0,400);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(5,0.2653421);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(8,0.579033);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(9,0.3522609);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(10,1.559816);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(11,0.6654398);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(12,0.6154058);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(14,0.247748);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(15,0.6843483);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(17,0.6196913);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(18,0.2836788);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(19,0.7446194);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(21,0.3091328);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(22,0.5683183);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(23,0.45567);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(27,0.2289845);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(28,0.2341326);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(29,0.2777887);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(30,0.7255367);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(32,0.2879486);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(37,0.3167205);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(38,0.6237629);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(39,0.1998136);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(40,0.7676333);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(41,13.40602);
   VbbHcc_algo_H_mass_stack_6->SetBinError(5,0.2653421);
   VbbHcc_algo_H_mass_stack_6->SetBinError(8,0.4131448);
   VbbHcc_algo_H_mass_stack_6->SetBinError(9,0.3522609);
   VbbHcc_algo_H_mass_stack_6->SetBinError(10,0.6496855);
   VbbHcc_algo_H_mass_stack_6->SetBinError(11,0.4705518);
   VbbHcc_algo_H_mass_stack_6->SetBinError(12,0.435493);
   VbbHcc_algo_H_mass_stack_6->SetBinError(14,0.247748);
   VbbHcc_algo_H_mass_stack_6->SetBinError(15,0.486946);
   VbbHcc_algo_H_mass_stack_6->SetBinError(17,0.4397477);
   VbbHcc_algo_H_mass_stack_6->SetBinError(18,0.2836788);
   VbbHcc_algo_H_mass_stack_6->SetBinError(19,0.4307048);
   VbbHcc_algo_H_mass_stack_6->SetBinError(21,0.3091328);
   VbbHcc_algo_H_mass_stack_6->SetBinError(22,0.4134288);
   VbbHcc_algo_H_mass_stack_6->SetBinError(23,0.3238221);
   VbbHcc_algo_H_mass_stack_6->SetBinError(27,0.2289845);
   VbbHcc_algo_H_mass_stack_6->SetBinError(28,0.2341326);
   VbbHcc_algo_H_mass_stack_6->SetBinError(29,0.2777887);
   VbbHcc_algo_H_mass_stack_6->SetBinError(30,0.5134921);
   VbbHcc_algo_H_mass_stack_6->SetBinError(32,0.2879486);
   VbbHcc_algo_H_mass_stack_6->SetBinError(37,0.3167205);
   VbbHcc_algo_H_mass_stack_6->SetBinError(38,0.4410991);
   VbbHcc_algo_H_mass_stack_6->SetBinError(39,0.1998136);
   VbbHcc_algo_H_mass_stack_6->SetBinError(40,0.550543);
   VbbHcc_algo_H_mass_stack_6->SetBinError(41,2.085647);
   VbbHcc_algo_H_mass_stack_6->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_mass_stack_6->SetFillColor(ci);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_mass_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_algo_17->Modified();
   H_mass_algo_17->cd();
   H_mass_algo_17->SetSelected(H_mass_algo_17);
}
