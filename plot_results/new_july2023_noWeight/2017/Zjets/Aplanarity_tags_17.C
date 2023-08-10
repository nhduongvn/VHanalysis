void Aplanarity_tags_17()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Aug 10 12:27:54 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-269.664,1.133333,2426.976);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,2054.582);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,237.7685);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,54.50874);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,17.11679);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,8.911818);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,4.658161);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,2.64261);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.712519);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,0.6564532);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,0.9678834);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.1326196);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.240921);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.3492224);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(15,0.06630981);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(16,0.1083014);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,29.25425);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,12.24641);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,5.031747);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,1.790832);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.314704);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,0.9331735);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.7741502);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.5824421);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,0.2391078);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,0.4180278);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.09377623);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.1432591);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.1795894);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(15,0.06630981);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(16,0.1083014);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(17051);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
