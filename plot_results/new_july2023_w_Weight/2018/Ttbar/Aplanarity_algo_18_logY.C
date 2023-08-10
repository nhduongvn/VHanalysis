void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Thu Aug 10 10:42:30 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2,-2.28879,1.133333,6.502979);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLogy();
   Aplanarity_algo_18->SetLeftMargin(0.15);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,221948.9);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,27423.78);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,5540.01);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,1475.785);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,477.8801);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,194.6478);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,78.73577);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,40.48329);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,22.13331);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,11.78216);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,7.391985);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,3.630428);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,1.973662);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,1.428404);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.8530252);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.2822694);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.08128454);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.0950829);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.2738712);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(20,0.08933013);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(21,0.07787837);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,148.0208);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,51.43245);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,23.39409);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,12.04531);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,6.414986);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,4.264885);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,2.664841);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,1.987766);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,1.371752);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.9654292);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.7743903);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.5446435);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.401741);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.3656126);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.2455507);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.1637213);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.08128454);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.06860274);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.1583889);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(20,0.08933013);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(21,0.07787837);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(3228671);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
