void H_mass_algo_17_logY()
{
//=========Macro generated from canvas: H_mass_algo_17/H_mass_algo_17
//=========  (Thu Aug 10 10:41:37 2023) by ROOT version 6.14/09
   TCanvas *H_mass_algo_17 = new TCanvas("H_mass_algo_17", "H_mass_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_algo_17->SetHighLightColor(2);
   H_mass_algo_17->Range(-80,-1.112907,453.3333,0.7435443);
   H_mass_algo_17->SetFillColor(0);
   H_mass_algo_17->SetBorderMode(0);
   H_mass_algo_17->SetBorderSize(2);
   H_mass_algo_17->SetLogy();
   H_mass_algo_17->SetLeftMargin(0.15);
   H_mass_algo_17->SetFrameBorderMode(0);
   H_mass_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_mass_stack_6 = new TH1D("VbbHcc_algo_H_mass_stack_6","",40,0,400);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(5,0.3785194);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(8,0.7096019);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(9,0.3688595);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(10,1.906998);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(11,0.8478108);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(12,0.7186879);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(14,0.3089127);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(15,0.7658265);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(17,0.683897);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(18,0.3271959);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(19,0.9315466);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(21,0.3658376);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(22,0.666095);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(23,0.525571);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(27,0.2709875);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(28,0.2485485);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(29,0.3962749);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(30,0.7966466);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(32,0.305678);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(37,0.3949133);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(38,0.748956);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(39,0.2364658);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(40,0.837682);
   VbbHcc_algo_H_mass_stack_6->SetBinContent(41,15.04221);
   VbbHcc_algo_H_mass_stack_6->SetBinError(5,0.3785194);
   VbbHcc_algo_H_mass_stack_6->SetBinError(8,0.5053499);
   VbbHcc_algo_H_mass_stack_6->SetBinError(9,0.3688595);
   VbbHcc_algo_H_mass_stack_6->SetBinError(10,0.7911044);
   VbbHcc_algo_H_mass_stack_6->SetBinError(11,0.6017847);
   VbbHcc_algo_H_mass_stack_6->SetBinError(12,0.5083666);
   VbbHcc_algo_H_mass_stack_6->SetBinError(14,0.3089127);
   VbbHcc_algo_H_mass_stack_6->SetBinError(15,0.5419704);
   VbbHcc_algo_H_mass_stack_6->SetBinError(17,0.484038);
   VbbHcc_algo_H_mass_stack_6->SetBinError(18,0.3271959);
   VbbHcc_algo_H_mass_stack_6->SetBinError(19,0.5447119);
   VbbHcc_algo_H_mass_stack_6->SetBinError(21,0.3658376);
   VbbHcc_algo_H_mass_stack_6->SetBinError(22,0.4859233);
   VbbHcc_algo_H_mass_stack_6->SetBinError(23,0.3734972);
   VbbHcc_algo_H_mass_stack_6->SetBinError(27,0.2709875);
   VbbHcc_algo_H_mass_stack_6->SetBinError(28,0.2485485);
   VbbHcc_algo_H_mass_stack_6->SetBinError(29,0.3962749);
   VbbHcc_algo_H_mass_stack_6->SetBinError(30,0.5633242);
   VbbHcc_algo_H_mass_stack_6->SetBinError(32,0.305678);
   VbbHcc_algo_H_mass_stack_6->SetBinError(37,0.3949133);
   VbbHcc_algo_H_mass_stack_6->SetBinError(38,0.5302796);
   VbbHcc_algo_H_mass_stack_6->SetBinError(39,0.2364658);
   VbbHcc_algo_H_mass_stack_6->SetBinError(40,0.5967387);
   VbbHcc_algo_H_mass_stack_6->SetBinError(41,2.333175);
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
