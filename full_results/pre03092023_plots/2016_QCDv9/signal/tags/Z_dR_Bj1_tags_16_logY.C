#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_16/Z_dR_Bj1_tags_16
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj1_tags_16 = new TCanvas("Z_dR_Bj1_tags_16", "Z_dR_Bj1_tags_16",0,0,600,600);
   Z_dR_Bj1_tags_16->SetHighLightColor(2);
   Z_dR_Bj1_tags_16->Range(-1.310117,-0.1385952,7.029799,1.016364);
   Z_dR_Bj1_tags_16->SetFillColor(0);
   Z_dR_Bj1_tags_16->SetFillStyle(4000);
   Z_dR_Bj1_tags_16->SetBorderMode(0);
   Z_dR_Bj1_tags_16->SetBorderSize(2);
   Z_dR_Bj1_tags_16->SetLogy();
   Z_dR_Bj1_tags_16->SetLeftMargin(0.15709);
   Z_dR_Bj1_tags_16->SetRightMargin(0.1234783);
   Z_dR_Bj1_tags_16->SetBottomMargin(0.12);
   Z_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_16->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_53 = new TH1F("st_stack_53","",30,0,6);
   st_stack_53->SetMinimum(-2.479381e+09);
   st_stack_53->SetMaximum(-0.8693858);
   st_stack_53->SetDirectory(0);
   st_stack_53->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_53->SetLineColor(ci);
   st_stack_53->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   st_stack_53->GetXaxis()->SetRange(1,30);
   st_stack_53->GetXaxis()->SetLabelFont(42);
   st_stack_53->GetXaxis()->SetTitleOffset(1);
   st_stack_53->GetXaxis()->SetTitleFont(42);
   st_stack_53->GetYaxis()->SetTitle("Event/0.2");
   st_stack_53->GetYaxis()->SetLabelFont(42);
   st_stack_53->GetYaxis()->SetTitleSize(0.037);
   st_stack_53->GetYaxis()->SetTitleFont(42);
   st_stack_53->GetZaxis()->SetLabelFont(42);
   st_stack_53->GetZaxis()->SetTitleOffset(1);
   st_stack_53->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_53);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(1,0.1273924);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(2,0.5385224);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(3,0.6002884);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(4,0.4188507);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(5,0.2393433);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(6,0.123532);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(7,0.09264901);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(8,0.1003698);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(9,0.04825469);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(10,0.05983582);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(11,0.05018488);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(12,0.04439432);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(13,0.03667357);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(14,0.03667357);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(15,0.030883);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(16,0.02316225);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(17,0.0154415);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(18,0.01351131);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(19,0.003860375);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(21,0.001930188);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(22,0.001930188);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(23,0.003860375);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinContent(25,0.001930188);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(1,0.01568092);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(2,0.03224049);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(3,0.03403923);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(4,0.02843344);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(5,0.02149366);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(6,0.0154415);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(7,0.01337273);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(8,0.01391878);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(9,0.009650938);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(10,0.01074683);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(11,0.009842065);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(12,0.009256855);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(13,0.008413493);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(14,0.008413493);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(15,0.007720751);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(16,0.006686366);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(17,0.005459395);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(18,0.005106797);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(19,0.002729698);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(21,0.001930188);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(22,0.001930188);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(23,0.002729698);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetBinError(25,0.001930188);
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetEntries(1354);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(1,0.06000805);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(2,0.2559167);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(3,0.2576816);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(4,0.1654003);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(5,0.08320443);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(6,0.05067906);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(7,0.03403818);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(8,0.02899548);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(9,0.02218785);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(10,0.01941437);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(11,0.01815369);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(12,0.02243998);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(13,0.01563235);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(14,0.01487594);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(15,0.01336314);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(16,0.01159819);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(17,0.00705977);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(18,0.004286289);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(19,0.001764943);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(20,0.001260673);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(21,0.0007564039);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(22,0.0002521346);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(23,0.0002521346);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(24,0.0002521346);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinContent(28,0.0002521346);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(1,0.003889744);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(2,0.008032774);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(3,0.008060426);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(4,0.006457798);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(5,0.004580253);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(6,0.003574626);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(7,0.00292954);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(8,0.002703843);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(9,0.002365233);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(10,0.002212473);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(11,0.002139433);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(12,0.002378634);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(13,0.00198531);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(14,0.001936683);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(15,0.001835568);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(16,0.00171006);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(17,0.001334171);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(18,0.001039578);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(19,0.0006670856);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(20,0.0005637902);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(21,0.00043671);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(22,0.0002521346);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(23,0.0002521346);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(24,0.0002521346);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetBinError(28,0.0002521346);
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetEntries(4322);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj1_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_tags_16->Modified();
   Z_dR_Bj1_tags_16->cd();
   Z_dR_Bj1_tags_16->SetSelected(Z_dR_Bj1_tags_16);
}
