void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Tue Aug 22 09:21:55 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-1287.237,1.133333,11585.14);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,9807.522);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,1235.267);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,295.9887);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,61.45922);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,20.66288);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,3.809304);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,4.967498);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,2.262807);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.371109);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.2847552);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.1084296);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(13,0.2371321);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,67.5065);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,27.29499);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,13.84614);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,5.893071);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,4.239732);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,1.728772);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,2.33936);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,1.778103);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.2670284);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.2307975);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.07728678);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(13,0.2371321);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(90522);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->Draw("HIST");
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
