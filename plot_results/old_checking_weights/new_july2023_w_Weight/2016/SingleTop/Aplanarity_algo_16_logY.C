void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug 10 10:42:28 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-2.722873,1.133333,5.367274);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,19085.79);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,2755.702);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,611.9859);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,172.4029);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,57.25787);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,21.95682);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,10.03257);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,5.210782);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1.933116);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,1.240247);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.6635351);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.3845326);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.08422737);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.3870831);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.09067077);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.02438775);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,56.11309);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,21.27601);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,10.02663);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,5.400883);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,3.020318);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.911432);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,1.263324);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.9973194);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.617558);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.3886434);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.3179329);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.2352891);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.0917668);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.3145667);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.05800488);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.02438775);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(347069);

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
