#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_16_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_16/H_dR_Bj1_tags_16
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *H_dR_Bj1_tags_16 = new TCanvas("H_dR_Bj1_tags_16", "H_dR_Bj1_tags_16",0,0,600,600);
   H_dR_Bj1_tags_16->SetHighLightColor(2);
   H_dR_Bj1_tags_16->Range(-1.310117,-0.09710927,7.029799,0.7121346);
   H_dR_Bj1_tags_16->SetFillColor(0);
   H_dR_Bj1_tags_16->SetFillStyle(4000);
   H_dR_Bj1_tags_16->SetBorderMode(0);
   H_dR_Bj1_tags_16->SetBorderSize(2);
   H_dR_Bj1_tags_16->SetLogy();
   H_dR_Bj1_tags_16->SetLeftMargin(0.15709);
   H_dR_Bj1_tags_16->SetRightMargin(0.1234783);
   H_dR_Bj1_tags_16->SetBottomMargin(0.12);
   H_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_16->SetFrameBorderMode(0);
   H_dR_Bj1_tags_16->SetFrameFillStyle(1000);
   H_dR_Bj1_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_45 = new TH1F("st_stack_45","",30,0,6);
   st_stack_45->SetMinimum(-2.43279e+09);
   st_stack_45->SetMaximum(-0.6277254);
   st_stack_45->SetDirectory(0);
   st_stack_45->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_45->SetLineColor(ci);
   st_stack_45->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   st_stack_45->GetXaxis()->SetRange(1,30);
   st_stack_45->GetXaxis()->SetLabelFont(42);
   st_stack_45->GetXaxis()->SetTitleOffset(1);
   st_stack_45->GetXaxis()->SetTitleFont(42);
   st_stack_45->GetYaxis()->SetTitle("Event/0.2");
   st_stack_45->GetYaxis()->SetLabelFont(42);
   st_stack_45->GetYaxis()->SetTitleSize(0.037);
   st_stack_45->GetYaxis()->SetTitleFont(42);
   st_stack_45->GetZaxis()->SetLabelFont(42);
   st_stack_45->GetZaxis()->SetTitleOffset(1);
   st_stack_45->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_45);
   
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_1 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(1,0.09264901);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(2,0.3551545);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(3,0.4130602);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(4,0.4091998);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(5,0.3223413);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(6,0.2103905);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(7,0.1428339);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(8,0.1293226);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(9,0.07527732);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(10,0.07141694);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(11,0.05597544);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(12,0.05983582);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(13,0.05211507);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(14,0.05404526);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(15,0.05018488);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(16,0.05211507);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(17,0.01930188);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(18,0.01930188);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(19,0.009650938);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(20,0.007720751);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(21,0.007720751);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(22,0.001930188);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinContent(25,0.001930188);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(1,0.01337273);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(2,0.02618234);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(3,0.02823621);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(4,0.02810396);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(5,0.02494352);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(6,0.02015175);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(7,0.0166041);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(8,0.01579927);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(9,0.01205402);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(10,0.01174087);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(11,0.01039438);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(12,0.01074683);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(13,0.01002955);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(14,0.01021359);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(15,0.009842065);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(16,0.01002955);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(17,0.006103789);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(18,0.006103789);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(19,0.004316031);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(20,0.003860375);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(21,0.003860375);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(22,0.001930188);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetBinError(25,0.001930188);
   VbbHcc_tags_H_dR_Bj1_stack_1->SetEntries(1354);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_Bj1_stack_2 = new TH1D("VbbHcc_tags_H_dR_Bj1_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(1,0.03000402);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(2,0.140439);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(3,0.1880924);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(4,0.1714516);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(5,0.1399347);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(6,0.09354195);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(7,0.06202512);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(8,0.04639278);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(9,0.03504672);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(10,0.0312647);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(11,0.02849122);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(12,0.02420493);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(13,0.01840583);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(14,0.01941437);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(15,0.01638875);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(16,0.01613662);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(17,0.009833251);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(18,0.006555501);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(19,0.003025616);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(20,0.002521346);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(21,0.002017077);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(22,0.001008539);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(23,0.001512808);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(24,0.0007564039);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(25,0.0007564039);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(28,0.0002521346);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinContent(29,0.0002521346);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(1,0.002750464);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(2,0.005950591);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(3,0.006886554);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(4,0.006574867);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(5,0.005939898);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(6,0.004856456);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(7,0.003954577);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(8,0.003420121);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(9,0.002972624);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(10,0.002807653);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(11,0.002680228);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(12,0.002470405);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(13,0.002154239);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(14,0.002212473);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(15,0.002032775);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(16,0.002017077);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(17,0.00157458);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(18,0.001285639);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(19,0.00087342);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(20,0.0007973198);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(21,0.0007131445);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(22,0.0005042693);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(23,0.0006176012);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(24,0.00043671);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(25,0.00043671);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(28,0.0002521346);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetBinError(29,0.0002521346);
   VbbHcc_tags_H_dR_Bj1_stack_2->SetEntries(4322);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_Bj1_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_Bj1_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_H_dR_Bj1_stack_1","ZHcc","F");

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
   H_dR_Bj1_tags_16->Modified();
   H_dR_Bj1_tags_16->cd();
   H_dR_Bj1_tags_16->SetSelected(H_dR_Bj1_tags_16);
}
