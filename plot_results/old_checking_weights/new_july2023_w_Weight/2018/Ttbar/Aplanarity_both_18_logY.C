void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug 10 10:43:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-2.132056,1.133333,5.262099);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_3 = new TH1D("VbbHcc_both_Aplanarity_stack_3","",50,0,1);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(1,17584.69);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(2,5729.113);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(3,2778.362);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(4,1605.358);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(5,979.5776);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(6,647.8393);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(7,436.6191);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(8,294.6999);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(9,199.7601);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(10,144.4889);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(11,95.85716);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(12,67.58286);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(13,46.95493);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(14,28.65955);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(15,20.32876);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(16,12.56081);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(17,7.548158);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(18,4.827579);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(19,2.359489);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(20,0.8102115);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(21,0.3145379);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(22,0.1080958);
   VbbHcc_both_Aplanarity_stack_3->SetBinContent(23,0.08098213);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(1,41.84152);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(2,23.1205);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(3,17.1496);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(4,12.62346);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(5,10.0962);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(6,7.855961);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(7,6.529232);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(8,6.146461);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(9,4.284893);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(10,3.820188);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(11,2.902149);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(12,2.539499);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(13,2.236442);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(14,1.601121);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(15,1.327616);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(16,1.032027);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(17,0.8315439);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(18,0.6972208);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(19,0.4472787);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(20,0.2523363);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(21,0.145208);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(22,0.06721854);
   VbbHcc_both_Aplanarity_stack_3->SetBinError(23,0.08098213);
   VbbHcc_both_Aplanarity_stack_3->SetEntries(383737);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
