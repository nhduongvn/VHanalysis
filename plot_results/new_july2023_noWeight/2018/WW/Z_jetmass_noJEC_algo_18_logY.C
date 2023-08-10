void Z_jetmass_noJEC_algo_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_algo_18/Z_jetmass_noJEC_algo_18
//=========  (Thu Aug 10 12:32:33 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_algo_18 = new TCanvas("Z_jetmass_noJEC_algo_18", "Z_jetmass_noJEC_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_algo_18->SetHighLightColor(2);
   Z_jetmass_noJEC_algo_18->Range(-60,-0.8686879,340,1.359686);
   Z_jetmass_noJEC_algo_18->SetFillColor(0);
   Z_jetmass_noJEC_algo_18->SetBorderMode(0);
   Z_jetmass_noJEC_algo_18->SetBorderSize(2);
   Z_jetmass_noJEC_algo_18->SetLogy();
   Z_jetmass_noJEC_algo_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_algo_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC_stack_6 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC_stack_6","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinContent(4,0.4520427);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinContent(5,1.808171);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinContent(6,4.068384);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinContent(7,6.328597);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinContent(8,7.232683);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinContent(9,4.068384);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinContent(10,2.260213);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinContent(11,3.164299);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinContent(12,0.4520427);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinContent(13,1.808171);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinContent(14,0.4520427);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinContent(15,0.9040853);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinContent(17,0.4520427);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinContent(20,0.4520427);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinContent(21,0.4520427);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinContent(55,0.4520427);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinError(4,0.4520427);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinError(5,0.9040853);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinError(6,1.356128);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinError(7,1.691389);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinError(8,1.808171);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinError(9,1.356128);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinError(10,1.010798);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinError(11,1.195992);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinError(12,0.4520427);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinError(13,0.9040853);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinError(14,0.4520427);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinError(15,0.6392849);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinError(17,0.4520427);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinError(20,0.4520427);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinError(21,0.4520427);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetBinError(55,0.4520427);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_algo_18->Modified();
   Z_jetmass_noJEC_algo_18->cd();
   Z_jetmass_noJEC_algo_18->SetSelected(Z_jetmass_noJEC_algo_18);
}
