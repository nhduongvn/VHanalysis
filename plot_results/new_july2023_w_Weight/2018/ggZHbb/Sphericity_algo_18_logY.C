void Sphericity_algo_18_logY()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Thu Aug 10 12:21:03 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-3.639431,1.133333,2.204238);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLogy();
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,21.69008);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,21.99489);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,12.37311);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,7.549929);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,4.274106);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,2.011464);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.667185);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.2336959);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.08093913);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.05632324);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.02532653);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.01500466);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.01323687);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.005623911);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.005331054);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.002631817);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.004027191);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.001855727);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.001761837);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.118076);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.1190331);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.08926547);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.06977923);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.05244948);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.03597735);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.02061615);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.012102);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.007044248);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.005844504);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.003913548);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.00291891);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.002800251);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.00168472);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.001616657);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.001143493);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.001534841);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.001080629);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.000885325);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(112076);

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
