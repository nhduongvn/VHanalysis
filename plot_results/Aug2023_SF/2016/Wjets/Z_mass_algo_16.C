#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_algo_16()
{
//=========Macro generated from canvas: Z_mass_algo_16/Z_mass_algo_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_algo_16 = new TCanvas("Z_mass_algo_16", "Z_mass_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_algo_16->SetHighLightColor(2);
   Z_mass_algo_16->Range(-80,-33.04235,453.3333,297.3811);
   Z_mass_algo_16->SetFillColor(0);
   Z_mass_algo_16->SetBorderMode(0);
   Z_mass_algo_16->SetBorderSize(2);
   Z_mass_algo_16->SetLeftMargin(0.15);
   Z_mass_algo_16->SetFrameBorderMode(0);
   Z_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__368 = new TH1D("VbbHcc_algo_Z_mass__368","",40,0,400);
   VbbHcc_algo_Z_mass__368->SetBinContent(3,0.5451127);
   VbbHcc_algo_Z_mass__368->SetBinContent(4,6.652276);
   VbbHcc_algo_Z_mass__368->SetBinContent(5,68.52603);
   VbbHcc_algo_Z_mass__368->SetBinContent(6,101.7767);
   VbbHcc_algo_Z_mass__368->SetBinContent(7,172.2535);
   VbbHcc_algo_Z_mass__368->SetBinContent(8,234.8713);
   VbbHcc_algo_Z_mass__368->SetBinContent(9,232.8632);
   VbbHcc_algo_Z_mass__368->SetBinContent(10,251.7512);
   VbbHcc_algo_Z_mass__368->SetBinContent(11,207.2856);
   VbbHcc_algo_Z_mass__368->SetBinContent(12,238.4862);
   VbbHcc_algo_Z_mass__368->SetBinContent(13,200.7794);
   VbbHcc_algo_Z_mass__368->SetBinContent(14,214.9456);
   VbbHcc_algo_Z_mass__368->SetBinContent(15,205.9425);
   VbbHcc_algo_Z_mass__368->SetBinContent(16,173.6729);
   VbbHcc_algo_Z_mass__368->SetBinContent(17,182.4986);
   VbbHcc_algo_Z_mass__368->SetBinContent(18,182.1369);
   VbbHcc_algo_Z_mass__368->SetBinContent(19,135.8381);
   VbbHcc_algo_Z_mass__368->SetBinContent(20,145.7077);
   VbbHcc_algo_Z_mass__368->SetBinContent(21,147.2595);
   VbbHcc_algo_Z_mass__368->SetBinContent(22,106.8511);
   VbbHcc_algo_Z_mass__368->SetBinContent(23,113.8667);
   VbbHcc_algo_Z_mass__368->SetBinContent(24,125.9243);
   VbbHcc_algo_Z_mass__368->SetBinContent(25,96.21362);
   VbbHcc_algo_Z_mass__368->SetBinContent(26,105.7869);
   VbbHcc_algo_Z_mass__368->SetBinContent(27,116.9827);
   VbbHcc_algo_Z_mass__368->SetBinContent(28,88.11873);
   VbbHcc_algo_Z_mass__368->SetBinContent(29,93.12268);
   VbbHcc_algo_Z_mass__368->SetBinContent(30,89.16344);
   VbbHcc_algo_Z_mass__368->SetBinContent(31,65.69174);
   VbbHcc_algo_Z_mass__368->SetBinContent(32,61.64065);
   VbbHcc_algo_Z_mass__368->SetBinContent(33,54.73184);
   VbbHcc_algo_Z_mass__368->SetBinContent(34,49.75504);
   VbbHcc_algo_Z_mass__368->SetBinContent(35,54.23958);
   VbbHcc_algo_Z_mass__368->SetBinContent(36,51.95051);
   VbbHcc_algo_Z_mass__368->SetBinContent(37,54.06221);
   VbbHcc_algo_Z_mass__368->SetBinContent(38,55.4582);
   VbbHcc_algo_Z_mass__368->SetBinContent(39,61.7987);
   VbbHcc_algo_Z_mass__368->SetBinContent(40,45.23971);
   VbbHcc_algo_Z_mass__368->SetBinContent(41,1844.249);
   VbbHcc_algo_Z_mass__368->SetBinError(3,0.4342771);
   VbbHcc_algo_Z_mass__368->SetBinError(4,5.448251);
   VbbHcc_algo_Z_mass__368->SetBinError(5,13.91289);
   VbbHcc_algo_Z_mass__368->SetBinError(6,14.03563);
   VbbHcc_algo_Z_mass__368->SetBinError(7,18.22159);
   VbbHcc_algo_Z_mass__368->SetBinError(8,20.58902);
   VbbHcc_algo_Z_mass__368->SetBinError(9,17.49425);
   VbbHcc_algo_Z_mass__368->SetBinError(10,21.16153);
   VbbHcc_algo_Z_mass__368->SetBinError(11,17.81128);
   VbbHcc_algo_Z_mass__368->SetBinError(12,20.51211);
   VbbHcc_algo_Z_mass__368->SetBinError(13,17.2655);
   VbbHcc_algo_Z_mass__368->SetBinError(14,18.40485);
   VbbHcc_algo_Z_mass__368->SetBinError(15,18.09079);
   VbbHcc_algo_Z_mass__368->SetBinError(16,13.27842);
   VbbHcc_algo_Z_mass__368->SetBinError(17,14.3471);
   VbbHcc_algo_Z_mass__368->SetBinError(18,16.27588);
   VbbHcc_algo_Z_mass__368->SetBinError(19,10.69056);
   VbbHcc_algo_Z_mass__368->SetBinError(20,13.39453);
   VbbHcc_algo_Z_mass__368->SetBinError(21,15.33508);
   VbbHcc_algo_Z_mass__368->SetBinError(22,9.421909);
   VbbHcc_algo_Z_mass__368->SetBinError(23,10.16358);
   VbbHcc_algo_Z_mass__368->SetBinError(24,12.76678);
   VbbHcc_algo_Z_mass__368->SetBinError(25,7.409511);
   VbbHcc_algo_Z_mass__368->SetBinError(26,11.43156);
   VbbHcc_algo_Z_mass__368->SetBinError(27,14.07032);
   VbbHcc_algo_Z_mass__368->SetBinError(28,8.878065);
   VbbHcc_algo_Z_mass__368->SetBinError(29,9.678264);
   VbbHcc_algo_Z_mass__368->SetBinError(30,9.624781);
   VbbHcc_algo_Z_mass__368->SetBinError(31,7.429956);
   VbbHcc_algo_Z_mass__368->SetBinError(32,6.696332);
   VbbHcc_algo_Z_mass__368->SetBinError(33,4.357782);
   VbbHcc_algo_Z_mass__368->SetBinError(34,3.77172);
   VbbHcc_algo_Z_mass__368->SetBinError(35,7.599169);
   VbbHcc_algo_Z_mass__368->SetBinError(36,7.102252);
   VbbHcc_algo_Z_mass__368->SetBinError(37,5.726596);
   VbbHcc_algo_Z_mass__368->SetBinError(38,6.645019);
   VbbHcc_algo_Z_mass__368->SetBinError(39,10.02652);
   VbbHcc_algo_Z_mass__368->SetBinError(40,6.981017);
   VbbHcc_algo_Z_mass__368->SetBinError(41,37.81177);
   VbbHcc_algo_Z_mass__368->SetEntries(71880);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Z_mass__368->SetFillColor(ci);
   VbbHcc_algo_Z_mass__368->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__368->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__368->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__368->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__368->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__368->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__368->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__368->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__368->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__368->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__368->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_algo_16->Modified();
   Z_mass_algo_16->cd();
   Z_mass_algo_16->SetSelected(Z_mass_algo_16);
}
