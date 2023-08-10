void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug 10 10:42:28 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-0.8383271,1.133333,7.582128);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,2900904);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,474717.2);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,102345.5);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,22685.83);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,5014.038);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,1573.543);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,135.5834);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,137.6);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,47.09996);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,16.40358);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,13.17292);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,4.75717);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,5.281904);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,2.017197);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,47993.78);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,26469.63);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,6667.209);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,2923.321);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,1060.804);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,576.087);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,48.04713);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,51.96457);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,27.20144);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,16.40358);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,13.17292);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,4.75717);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,5.281904);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,2.017197);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(131372);

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
