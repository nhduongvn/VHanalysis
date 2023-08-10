void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 10:42:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-6.766155,1.133333,4.88295);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_5 = new TH1D("VbbHcc_algo_Sphericity_stack_5","",25,0,1);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(1,2757.342);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(2,2413.455);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(3,1433.164);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(4,822.5455);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(5,353.015);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(6,171.3558);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(7,64.36198);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(8,11.8121);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(9,11.1458);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(10,4.110096);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(11,3.249933);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(12,9.187824);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(13,0.9644613);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(14,1.003292);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(15,0.4710043);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(16,0.1189731);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(17,0.03554996);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(18,5.009395e-06);
   VbbHcc_algo_Sphericity_stack_5->SetBinContent(19,0.07941791);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(1,69.41049);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(2,69.29677);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(3,54.19188);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(4,38.5361);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(5,18.39916);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(6,13.07543);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(7,11.23929);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(8,1.738127);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(9,6.881178);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(10,1.107636);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(11,1.571535);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(12,6.703341);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(13,0.5518289);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(14,0.5659369);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(15,0.2231431);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(16,0.07034533);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(17,0.03088846);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(18,5.009395e-06);
   VbbHcc_algo_Sphericity_stack_5->SetBinError(19,0.07941791);
   VbbHcc_algo_Sphericity_stack_5->SetEntries(65948);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Sphericity_stack_5->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_5->Draw("HIST");
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
