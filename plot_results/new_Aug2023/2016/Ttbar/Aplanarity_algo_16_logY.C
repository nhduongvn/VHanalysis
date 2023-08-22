void Aplanarity_algo_16_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Tue Aug 22 09:17:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-2.695668,1.133333,6.611904);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLogy();
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,253278.1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,33840.8);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,7089.922);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,1991.733);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,667.7165);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,265.276);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,116.6887);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,53.88623);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,29.0285);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,13.35435);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,8.74388);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,4.745424);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,3.558928);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,1.571171);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.8501248);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.4361466);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.3219679);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.2570779);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.03983786);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(22,0.03436524);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,113.9997);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,41.06192);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,18.61039);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,9.763458);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,5.601947);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,3.512514);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,2.311427);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,1.563041);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,1.150206);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.7615636);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.6298069);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.4596697);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.4032502);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.2614551);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.1808602);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.1501458);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.1183801);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1058686);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.03983786);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(22,0.03436524);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(6260583);

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
