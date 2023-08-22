void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Tue Aug 22 09:17:31 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-1.643924,1.133333,6.033312);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_3 = new TH1D("VbbHcc_algo_Sphericity_stack_3","",25,0,1);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(1,94018.09);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(2,97283.53);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(3,50999.32);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(4,27529.22);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(5,14589.34);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(6,7012.098);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(7,3050.049);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(8,1342.637);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(9,663.1329);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(10,349.7826);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(11,197.186);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(12,122.0855);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(13,70.64018);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(14,51.76818);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(15,33.80472);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(16,21.92682);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(17,14.35111);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(18,8.758036);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(19,6.140167);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(20,2.02008);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(21,0.8991089);
   VbbHcc_algo_Sphericity_stack_3->SetBinContent(22,0.2659679);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(1,69.3795);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(2,70.42594);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(3,51.00983);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(4,37.56126);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(5,27.36644);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(6,18.87747);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(7,12.2987);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(8,8.026113);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(9,5.58257);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(10,4.007799);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(11,2.983455);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(12,2.347857);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(13,1.772922);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(14,1.503053);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(15,1.215191);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(16,0.9768943);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(17,0.787217);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(18,0.6108738);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(19,0.5249169);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(20,0.3057417);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(21,0.1921786);
   VbbHcc_algo_Sphericity_stack_3->SetBinError(22,0.1113153);
   VbbHcc_algo_Sphericity_stack_3->SetEntries(6260583);

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
