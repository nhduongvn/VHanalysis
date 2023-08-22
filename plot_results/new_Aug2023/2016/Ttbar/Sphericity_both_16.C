void Sphericity_both_16()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Tue Aug 22 09:23:13 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-267.5176,1.133333,2407.659);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_3 = new TH1D("VbbHcc_both_Sphericity_stack_3","",25,0,1);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(1,1783.874);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(2,2038.229);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(3,1552.583);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(4,1163.615);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(5,924.5364);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(6,726.248);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(7,612.0581);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(8,504.0789);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(9,425.8627);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(10,361.8989);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(11,308.9923);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(12,265.507);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(13,227.309);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(14,190.6482);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(15,155.0013);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(16,125.8697);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(17,98.69495);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(18,70.60838);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(19,41.51532);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(20,21.95121);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(21,6.519419);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(22,3.303142);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(23,0.954542);
   VbbHcc_both_Sphericity_stack_3->SetBinContent(25,0.06405613);
   VbbHcc_both_Sphericity_stack_3->SetBinError(1,9.763306);
   VbbHcc_both_Sphericity_stack_3->SetBinError(2,10.3967);
   VbbHcc_both_Sphericity_stack_3->SetBinError(3,9.100011);
   VbbHcc_both_Sphericity_stack_3->SetBinError(4,7.894886);
   VbbHcc_both_Sphericity_stack_3->SetBinError(5,7.03803);
   VbbHcc_both_Sphericity_stack_3->SetBinError(6,6.231915);
   VbbHcc_both_Sphericity_stack_3->SetBinError(7,5.733027);
   VbbHcc_both_Sphericity_stack_3->SetBinError(8,5.197651);
   VbbHcc_both_Sphericity_stack_3->SetBinError(9,4.787863);
   VbbHcc_both_Sphericity_stack_3->SetBinError(10,4.413303);
   VbbHcc_both_Sphericity_stack_3->SetBinError(11,4.085185);
   VbbHcc_both_Sphericity_stack_3->SetBinError(12,3.775283);
   VbbHcc_both_Sphericity_stack_3->SetBinError(13,3.482005);
   VbbHcc_both_Sphericity_stack_3->SetBinError(14,3.204639);
   VbbHcc_both_Sphericity_stack_3->SetBinError(15,2.885343);
   VbbHcc_both_Sphericity_stack_3->SetBinError(16,2.609579);
   VbbHcc_both_Sphericity_stack_3->SetBinError(17,2.302084);
   VbbHcc_both_Sphericity_stack_3->SetBinError(18,1.953605);
   VbbHcc_both_Sphericity_stack_3->SetBinError(19,1.486794);
   VbbHcc_both_Sphericity_stack_3->SetBinError(20,1.07694);
   VbbHcc_both_Sphericity_stack_3->SetBinError(21,0.5767126);
   VbbHcc_both_Sphericity_stack_3->SetBinError(22,0.4146023);
   VbbHcc_both_Sphericity_stack_3->SetBinError(23,0.2279598);
   VbbHcc_both_Sphericity_stack_3->SetBinError(25,0.06405613);
   VbbHcc_both_Sphericity_stack_3->SetEntries(232621);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
