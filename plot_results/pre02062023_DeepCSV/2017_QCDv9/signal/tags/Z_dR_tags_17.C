#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_17()
{
//=========Macro generated from canvas: Z_dR_tags_17/Z_dR_tags_17
//=========  (Wed Jan 18 11:40:22 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_17 = new TCanvas("Z_dR_tags_17", "Z_dR_tags_17",0,0,600,600);
   Z_dR_tags_17->SetHighLightColor(2);
   Z_dR_tags_17->Range(-1.310117,-0.2907038,7.029799,2.131828);
   Z_dR_tags_17->SetFillColor(0);
   Z_dR_tags_17->SetFillStyle(4000);
   Z_dR_tags_17->SetBorderMode(0);
   Z_dR_tags_17->SetBorderSize(2);
   Z_dR_tags_17->SetLeftMargin(0.15709);
   Z_dR_tags_17->SetRightMargin(0.1234783);
   Z_dR_tags_17->SetBottomMargin(0.12);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   Z_dR_tags_17->SetFrameFillStyle(1000);
   Z_dR_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.889575);
   
   TH1F *st_stack_18 = new TH1F("st_stack_18","",30,0,6);
   st_stack_18->SetMinimum(0);
   st_stack_18->SetMaximum(1.889575);
   st_stack_18->SetDirectory(0);
   st_stack_18->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_18->SetLineColor(ci);
   st_stack_18->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_18->GetXaxis()->SetRange(1,30);
   st_stack_18->GetXaxis()->SetLabelFont(42);
   st_stack_18->GetXaxis()->SetTitleOffset(1);
   st_stack_18->GetXaxis()->SetTitleFont(42);
   st_stack_18->GetYaxis()->SetTitle("Events/0.2");
   st_stack_18->GetYaxis()->SetLabelFont(42);
   st_stack_18->GetYaxis()->SetTitleSize(0.037);
   st_stack_18->GetYaxis()->SetTitleFont(42);
   st_stack_18->GetZaxis()->SetLabelFont(42);
   st_stack_18->GetZaxis()->SetTitleOffset(1);
   st_stack_18->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_18);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,0.2873444);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,0.5025799);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,0.7625233);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,0.8863425);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,0.8168715);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,0.7998922);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,0.7425129);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,0.668465);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,0.652537);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,0.570857);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,0.5835028);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,0.6136372);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,0.5743662);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,0.5858228);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,0.2286012);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,0.1039083);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,0.04024611);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,0.03887018);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,0.01058843);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,0.01527674);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,0.01062894);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,0.005865016);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,0.00514705);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,0.02322743);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,0.0299233);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,0.03738643);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,0.04018151);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,0.03880956);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,0.03842996);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,0.03697356);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,0.03485977);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,0.03466693);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,0.03241826);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,0.0326176);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,0.03340942);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,0.03215672);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,0.03326297);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,0.0200994);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,0.01413861);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,0.008147641);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,0.008368714);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,0.004336074);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,0.004916016);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,0.00427903);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,0.003081434);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,0.002998255);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(6355);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,0.08843953);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,0.1982412);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,0.3310585);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,0.373374);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,0.3098598);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,0.2129969);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,0.15253);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,0.1206072);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,0.1174714);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,0.1046851);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,0.1134507);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,0.1189937);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,0.1198308);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,0.1218763);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,0.06011295);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,0.03535451);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,0.02153409);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,0.009259728);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,0.00817978);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,0.003905495);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,0.002719983);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,0.001319796);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,0.0004651067);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,0.0002588714);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,0.004656909);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,0.00697634);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,0.009005988);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,0.00955929);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,0.008744492);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,0.00721566);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,0.006079668);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,0.005445142);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,0.005364924);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,0.005093842);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,0.005251522);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,0.005407311);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,0.005370358);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,0.005435523);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,0.003857392);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,0.002918003);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,0.002299004);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,0.001437432);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,0.001427089);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,0.0009662519);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,0.0007920218);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,0.0005458132);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,0.0003250341);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,0.0002588714);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(12362);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tags_17->Modified();
   Z_dR_tags_17->cd();
   Z_dR_tags_17->SetSelected(Z_dR_tags_17);
}
