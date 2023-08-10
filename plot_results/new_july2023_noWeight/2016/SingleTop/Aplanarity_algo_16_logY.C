void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug 10 12:32:17 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-2.442039,1.133333,5.376246);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,20742.87);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,2969.615);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,655.8527);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,187.0592);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,61.09397);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,23.7488);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,10.72257);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,5.739701);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,2.390702);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,1.500598);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.723194);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.6864517);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.2326537);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.4468063);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.1381939);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.04373405);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,52.66002);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,19.98284);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,9.446154);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,5.090903);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,2.892423);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.840864);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,1.198354);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.92418);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.5874592);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.4323977);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.3021068);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.3000271);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.1043274);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.2801279);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.07999024);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.04373405);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(358903);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
