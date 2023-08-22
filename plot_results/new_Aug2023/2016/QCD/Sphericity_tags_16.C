void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Tue Aug 22 09:20:42 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-6260.411,1.133333,56343.7);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,47698.37);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,38183.8);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,20317.38);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,13455.97);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,4814.551);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,3667.837);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,810.9513);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,836.8213);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,532.3083);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,202.8443);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,155.7477);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,135.8513);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,127.4519);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,78.17496);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,69.40803);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,76.18019);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,55.40286);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,17.69068);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,13.79446);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,3508.281);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,3028.312);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,2390.219);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,1675.065);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,706.3191);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,1072.622);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,101.1219);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,211.5922);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,263.8939);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,49.12884);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,44.90604);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,37.62244);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,37.12126);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,32.47028);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,18.38313);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,26.47273);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,30.43558);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,8.229862);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,6.931259);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(8758);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
