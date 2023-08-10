void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug  3 12:24:53 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-2.717336,1.133333,24.45602);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,20.49724);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,20.70351);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,11.66238);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,7.09591);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,4.031726);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,1.898125);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.6366825);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.2289195);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.08167182);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.05901832);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.02563422);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.01669205);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.01371133);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.007153736);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.00774988);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.003576868);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.004173012);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.001788434);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.002384579);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.110541);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.1110958);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.08338144);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.0650399);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.04902542);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.03363862);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.01948217);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.011682);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.006977694);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.005931564);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.003909182);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.003154501);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.002859009);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.002065106);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.00214943);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.00146025);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.00157725);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.001032553);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.001192289);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(112352);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->Draw("HIST");
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
