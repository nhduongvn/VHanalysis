void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Tue Aug 22 09:16:28 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,0.6740522,1.133333,5.614801);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,69691.02);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,60531.53);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,35180.32);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,21671.97);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,12082.86);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,7711.391);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,4677.053);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,1956.716);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,955.6369);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,733.1846);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,842.9813);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,304.8902);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,327.7667);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,42.99806);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,205.7708);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,214.0394);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,120.0359);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,29.45487);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,55.89264);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,4394.189);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,4198.994);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,2884.36);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,2192.492);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,1800.472);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,1411.548);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,1068.911);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,521.9064);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,430.709);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,155.8745);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,392.723);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,82.56404);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,87.14245);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,17.80461);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,71.26496);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,67.30569);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,57.36353);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,13.70267);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,34.8889);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(9459);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
