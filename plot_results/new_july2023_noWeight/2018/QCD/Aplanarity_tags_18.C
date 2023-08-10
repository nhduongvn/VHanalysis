void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Aug 10 12:27:54 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-24041.55,1.133333,216374);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,183173.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,19666.29);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,7588.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,3203.685);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,1308.111);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,343.2969);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,144.9497);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,47.32991);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,73.95465);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,39.64555);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,9.789551);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,31.92775);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,6479.088);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,1889.958);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,1265.279);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,921.3914);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,537.1617);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,90.40399);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,58.98377);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,20.48606);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,46.20275);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,32.48434);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,9.789551);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,31.92775);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(10231);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
