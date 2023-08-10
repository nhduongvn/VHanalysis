void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 12:21:02 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-0.03292978,1.133333,7.043094);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,1142728);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,1104736);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,635642.8);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,363035.3);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,162699);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,66063.53);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,23732.33);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,5240.581);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,1174.65);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,1101.702);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,313.7421);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,140.7475);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,198.6813);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,451.2992);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,31.93672);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,27.95255);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,209.0043);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,53.60411);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,11.14979);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,9.455896);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,26913.86);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,29990.75);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,26830.65);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,24996.51);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,7574.027);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,4442.461);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,3407.684);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,957.2133);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,210.741);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,416.9737);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,74.5654);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,47.69336);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,73.28076);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,323.3683);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,17.23774);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,10.83033);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,166.3057);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,26.55637);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,8.21804);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,6.835582);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(131372);

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
