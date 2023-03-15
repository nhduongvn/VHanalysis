#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_18_logY()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2183529,-0.1159524,1.171633,0.8503177);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetFillStyle(4000);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLogy();
   Sphericity_tags_18->SetLeftMargin(0.15709);
   Sphericity_tags_18->SetRightMargin(0.1234783);
   Sphericity_tags_18->SetBottomMargin(0.12);
   Sphericity_tags_18->SetFrameFillStyle(1000);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameFillStyle(1000);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_59 = new TH1F("st_stack_59","",25,0,1);
   st_stack_59->SetMinimum(-2.455797e+09);
   st_stack_59->SetMaximum(-0.7384728);
   st_stack_59->SetDirectory(0);
   st_stack_59->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_59->SetLineColor(ci);
   st_stack_59->GetXaxis()->SetTitle("Sphericity");
   st_stack_59->GetXaxis()->SetRange(1,25);
   st_stack_59->GetXaxis()->SetLabelFont(42);
   st_stack_59->GetXaxis()->SetTitleOffset(1);
   st_stack_59->GetXaxis()->SetTitleFont(42);
   st_stack_59->GetYaxis()->SetTitle("Event/0.04");
   st_stack_59->GetYaxis()->SetLabelFont(42);
   st_stack_59->GetYaxis()->SetTitleSize(0.037);
   st_stack_59->GetYaxis()->SetTitleFont(42);
   st_stack_59->GetZaxis()->SetLabelFont(42);
   st_stack_59->GetZaxis()->SetTitleOffset(1);
   st_stack_59->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_59);
   
   
   TH1D *VbbHcc_tags_Sphericity_stack_1 = new TH1D("VbbHcc_tags_Sphericity_stack_1","",25,0,1);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(1,0.06823831);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(2,0.2230069);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(3,0.412815);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(4,0.5301338);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(5,0.4513809);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(6,0.4595092);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(7,0.4355882);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(8,0.3983055);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(9,0.4257879);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(10,0.3744582);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(11,0.2791356);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(12,0.288601);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(13,0.2937206);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(14,0.2306909);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(15,0.2309134);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(16,0.1732529);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(17,0.09504808);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(18,0.07516224);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(19,0.0481488);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(20,0.03617943);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(21,0.01287955);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(22,0.007123877);
   VbbHcc_tags_Sphericity_stack_1->SetBinContent(24,0.001557348);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(1,0.01137183);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(2,0.02051808);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(3,0.02984891);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(4,0.04171651);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(5,0.02991155);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(6,0.0298889);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(7,0.0320392);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(8,0.03335417);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(9,0.02956485);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(10,0.03005671);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(11,0.02342887);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(12,0.02322824);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(13,0.024088);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(14,0.02497508);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(15,0.02090193);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(16,0.0179198);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(17,0.0141401);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(18,0.01163508);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(19,0.009314201);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(20,0.008208845);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(21,0.004943718);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(22,0.003258783);
   VbbHcc_tags_Sphericity_stack_1->SetBinError(24,0.001557348);
   VbbHcc_tags_Sphericity_stack_1->SetEntries(3172);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_tags_Sphericity_stack_2 = new TH1D("VbbHcc_tags_Sphericity_stack_2","",25,0,1);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(1,0.03077376);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(2,0.1179111);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(3,0.1723037);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(4,0.1876668);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(5,0.1860952);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(6,0.1916294);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(7,0.1949895);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(8,0.1877851);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(9,0.1765206);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(10,0.1575998);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(11,0.1466178);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(12,0.1325871);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(13,0.1193906);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(14,0.1050453);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(15,0.08981179);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(16,0.07150237);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(17,0.05744823);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(18,0.0403397);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(19,0.02106654);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(20,0.01098646);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(21,0.003570552);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(22,0.0002930773);
   VbbHcc_tags_Sphericity_stack_2->SetBinContent(23,0.0007049177);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(1,0.002728755);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(2,0.00551265);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(3,0.006658658);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(4,0.007450027);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(5,0.006873454);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(6,0.007261806);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(7,0.00706405);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(8,0.007082437);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(9,0.006615273);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(10,0.006478865);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(11,0.006497836);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(12,0.005718528);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(13,0.005971888);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(14,0.00512147);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(15,0.005180783);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(16,0.004409575);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(17,0.003770013);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(18,0.004744504);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(19,0.002279308);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(20,0.001620094);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(21,0.0009518115);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(22,0.0002930773);
   VbbHcc_tags_Sphericity_stack_2->SetBinError(23,0.0005027012);
   VbbHcc_tags_Sphericity_stack_2->SetEntries(10130);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Sphericity_stack_1","ZHcc","F");

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
