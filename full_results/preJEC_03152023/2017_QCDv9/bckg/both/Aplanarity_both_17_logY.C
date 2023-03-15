#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Mar  9 13:18:03 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2183529,-0.5971698,1.171633,7.846525);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetFillStyle(4000);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15709);
   Aplanarity_both_17->SetRightMargin(0.1234783);
   Aplanarity_both_17->SetBottomMargin(0.12);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(4708096);
   
   TH1F *st_stack_190 = new TH1F("st_stack_190","",50,0,1);
   st_stack_190->SetMinimum(2.606595);
   st_stack_190->SetMaximum(1.004975e+07);
   st_stack_190->SetDirectory(0);
   st_stack_190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_190->SetLineColor(ci);
   st_stack_190->GetXaxis()->SetTitle("Aplanarity");
   st_stack_190->GetXaxis()->SetRange(1,50);
   st_stack_190->GetXaxis()->SetLabelFont(42);
   st_stack_190->GetXaxis()->SetTitleOffset(1);
   st_stack_190->GetXaxis()->SetTitleFont(42);
   st_stack_190->GetYaxis()->SetTitle("Event/0.02");
   st_stack_190->GetYaxis()->SetLabelFont(42);
   st_stack_190->GetYaxis()->SetTitleSize(0.037);
   st_stack_190->GetYaxis()->SetTitleFont(42);
   st_stack_190->GetZaxis()->SetLabelFont(42);
   st_stack_190->GetZaxis()->SetTitleOffset(1);
   st_stack_190->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_190);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,3575107);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,1764765);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,939764.6);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,545145.3);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,331796.9);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,175484.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,145021.1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,68839.82);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,86665.42);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,30924.2);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,32819.01);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,17363.18);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,8087.936);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,5453.471);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,4438.298);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,13863.3);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,508.4907);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,1404.141);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,1022.541);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,41.50737);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(21,20.47555);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,68503.36);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,58994.15);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,38960.73);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,37408.11);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,23653.17);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,9423.447);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,23423.62);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,5731.833);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,24848.68);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,4024.084);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,14085.41);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,3634.998);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,1661.016);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,1750.751);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,1855.899);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,11538.95);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,291.1139);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,604.1239);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,538.3652);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,28.9915);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(21,20.47555);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(278187);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(0,0.08982209);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,332612.5);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,243471.4);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,164040.8);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,112605.5);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,79068.08);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,56525.66);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,40655.69);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,29432.83);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,21476.84);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,15522.44);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,11141.83);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,7942.172);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,5559.676);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,3813.325);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,2566.405);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,1680.029);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,1036.241);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,611.643);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,345.4442);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,175.2568);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,77.52199);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,30.37901);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(23,8.251811);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(24,1.460266);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(0,0.08982209);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,156.9237);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,135.1976);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,111.2944);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,92.36976);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,77.47972);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,65.58497);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,55.65168);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,47.37719);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,40.50486);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,34.45037);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,29.20429);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,24.67105);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,20.65128);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,17.10892);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,14.06117);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,11.35352);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,8.927878);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,6.857857);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,5.164412);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,3.658513);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,2.457426);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,1.52784);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(23,0.7925698);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(24,0.3420679);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(1.677555e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
