void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Aug 10 12:27:54 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-374.4787,1.133333,3370.308);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,2853.171);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,298.2681);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,82.12758);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,24.98801);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,10.55906);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,6.548853);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,3.202282);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.428843);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,3.116143);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,1.237121);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.2183513);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.3109243);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.09257296);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(15,0.2183513);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(16,0.09257296);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,37.41483);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,12.36668);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,7.41136);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,2.469538);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.630062);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,1.275859);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.7354273);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.3859771);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,1.046359);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,0.566872);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.1561728);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.1815481);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.09257296);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(15,0.1561728);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(16,0.09257296);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(18660);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->Draw("HIST");
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
