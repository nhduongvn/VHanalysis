void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 12:32:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,0.07578268,1.133333,7.011458);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,1097340);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,1061694);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,605614.8);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,347826.6);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,156581.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,62804.89);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,23630.39);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,5558.33);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,1378.922);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,1214.569);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,357.6516);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,209.2587);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,452.7389);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,436.9069);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,57.93991);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,61.01364);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,335.6889);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,96.00884);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,28.08319);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,11.75927);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,27275.05);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,27984.64);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,24614.51);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,22649.24);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,7201.355);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,4034.845);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,3346.297);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,953.8508);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,302.8815);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,395.9272);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,80.09707);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,61.33952);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,274.0651);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,273.9342);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,26.46939);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,26.7001);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,270.1824);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,40.64289);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,22.96885);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,8.315057);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(135373);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
