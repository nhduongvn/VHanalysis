void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 10:42:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-1.50782,1.133333,6.180564);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,130203.9);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,136199.8);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,71214.58);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,38206.89);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,20134.73);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,9677.876);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,4223.295);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,1863.978);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,922.1332);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,485.4136);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,275.4087);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,168.0097);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,97.58698);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,70.45744);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,45.43365);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,29.87089);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,19.33545);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,11.75666);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,8.20028);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,2.869233);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,1.252368);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.3647943);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,95.09094);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,97.61912);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,70.52458);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,51.59907);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,37.36435);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,25.73714);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,16.81276);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,10.99775);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,7.653677);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,5.48051);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,4.089535);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,3.188758);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,2.407111);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,2.021008);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.619293);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,1.316249);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,1.044665);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.8052744);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.6928813);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.4178918);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.2635535);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.1534472);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(6426049);

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
