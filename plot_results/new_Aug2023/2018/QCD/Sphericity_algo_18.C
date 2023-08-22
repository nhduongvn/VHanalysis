void Sphericity_algo_18()
{
//=========Macro generated from canvas: Sphericity_algo_18/Sphericity_algo_18
//=========  (Tue Aug 22 09:21:54 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_18 = new TCanvas("Sphericity_algo_18", "Sphericity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_18->SetHighLightColor(2);
   Sphericity_algo_18->Range(-0.2,-80782.53,1.133333,727042.7);
   Sphericity_algo_18->SetFillColor(0);
   Sphericity_algo_18->SetBorderMode(0);
   Sphericity_algo_18->SetBorderSize(2);
   Sphericity_algo_18->SetLeftMargin(0.15);
   Sphericity_algo_18->SetFrameBorderMode(0);
   Sphericity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,615485.9);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,555816.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,321531.4);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,168010.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,81176.81);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,40708.65);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,12662.43);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,3320.182);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,1496.272);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,849.0345);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,328.7389);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,450.0695);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,114.4576);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,72.48741);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,54.42481);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,69.00786);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,531.0297);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,30.76236);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,5.119067);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,12.28168);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,12662.4);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,12491.95);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,23923.64);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,5881.257);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,4385.825);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,3436.602);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,2390.553);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,959.2287);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,569.0826);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,433.1281);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,100.974);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,304.8636);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,51.66967);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,35.47621);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,32.90672);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,35.751);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,491.1382);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,16.44764);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,5.119067);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,8.881712);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(105593);

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
