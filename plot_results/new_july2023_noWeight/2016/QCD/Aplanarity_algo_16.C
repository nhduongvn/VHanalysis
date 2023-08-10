void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug 10 12:28:44 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-365272.2,1.133333,3287450);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,2783026);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,453404.3);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,100180);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,21906.7);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,4959.521);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,1732.705);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,190.7027);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,150.8602);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,56.16638);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,22.20356);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,22.20356);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,5.879633);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,28.08319);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,5.879633);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,45802.49);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,24018.93);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,6536.864);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,2782.796);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,1016.717);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,606.8121);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,60.48476);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,55.33261);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,32.48286);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,22.20356);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,22.20356);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,5.879633);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,22.96885);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,5.879633);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(135373);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->Draw("HIST");
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
