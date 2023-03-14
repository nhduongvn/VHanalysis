#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_both_17()
{
//=========Macro generated from canvas: Z_pt_both_17/Z_pt_both_17
//=========  (Thu Feb 16 10:35:20 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_both_17 = new TCanvas("Z_pt_both_17", "Z_pt_both_17",0,0,600,600);
   Z_pt_both_17->SetHighLightColor(2);
   Z_pt_both_17->Range(37.97653,-0.3519616,1705.96,2.581051);
   Z_pt_both_17->SetFillColor(0);
   Z_pt_both_17->SetFillStyle(4000);
   Z_pt_both_17->SetBorderMode(0);
   Z_pt_both_17->SetBorderSize(2);
   Z_pt_both_17->SetLeftMargin(0.15709);
   Z_pt_both_17->SetRightMargin(0.1234783);
   Z_pt_both_17->SetBottomMargin(0.12);
   Z_pt_both_17->SetFrameFillStyle(1000);
   Z_pt_both_17->SetFrameBorderMode(0);
   Z_pt_both_17->SetFrameFillStyle(1000);
   Z_pt_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.28775);
   
   TH1F *st_stack_138 = new TH1F("st_stack_138","",40,0,2000);
   st_stack_138->SetMinimum(0);
   st_stack_138->SetMaximum(2.28775);
   st_stack_138->SetDirectory(0);
   st_stack_138->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_138->SetLineColor(ci);
   st_stack_138->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_138->GetXaxis()->SetRange(7,30);
   st_stack_138->GetXaxis()->SetLabelFont(42);
   st_stack_138->GetXaxis()->SetTitleOffset(1);
   st_stack_138->GetXaxis()->SetTitleFont(42);
   st_stack_138->GetYaxis()->SetTitle("Events/50.0");
   st_stack_138->GetYaxis()->SetLabelFont(42);
   st_stack_138->GetYaxis()->SetTitleSize(0.037);
   st_stack_138->GetYaxis()->SetTitleFont(42);
   st_stack_138->GetZaxis()->SetLabelFont(42);
   st_stack_138->GetZaxis()->SetTitleOffset(1);
   st_stack_138->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_138);
   
   
   TH1D *VbbHcc_both_Z_pt_stack_1 = new TH1D("VbbHcc_both_Z_pt_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(1,0.526787);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(2,1.18602);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(3,1.525167);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(4,1.118743);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(5,0.7791041);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(6,0.4203591);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(7,0.2493548);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(8,0.1602306);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(9,0.07339543);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(10,0.03115668);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(11,0.01362146);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(12,0.007473076);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(13,0.007224517);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(14,0.005322883);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(15,0.006328098);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(18,0.001938755);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(26,0.002001313);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(27,0.001842579);
   VbbHcc_both_Z_pt_stack_1->SetBinError(1,0.03172508);
   VbbHcc_both_Z_pt_stack_1->SetBinError(2,0.04735018);
   VbbHcc_both_Z_pt_stack_1->SetBinError(3,0.05353455);
   VbbHcc_both_Z_pt_stack_1->SetBinError(4,0.04615595);
   VbbHcc_both_Z_pt_stack_1->SetBinError(5,0.03838596);
   VbbHcc_both_Z_pt_stack_1->SetBinError(6,0.02828675);
   VbbHcc_both_Z_pt_stack_1->SetBinError(7,0.02142677);
   VbbHcc_both_Z_pt_stack_1->SetBinError(8,0.0172016);
   VbbHcc_both_Z_pt_stack_1->SetBinError(9,0.01163608);
   VbbHcc_both_Z_pt_stack_1->SetBinError(10,0.00785999);
   VbbHcc_both_Z_pt_stack_1->SetBinError(11,0.005912147);
   VbbHcc_both_Z_pt_stack_1->SetBinError(12,0.003745163);
   VbbHcc_both_Z_pt_stack_1->SetBinError(13,0.003689831);
   VbbHcc_both_Z_pt_stack_1->SetBinError(14,0.003074602);
   VbbHcc_both_Z_pt_stack_1->SetBinError(15,0.003670836);
   VbbHcc_both_Z_pt_stack_1->SetBinError(18,0.001938755);
   VbbHcc_both_Z_pt_stack_1->SetBinError(26,0.002001313);
   VbbHcc_both_Z_pt_stack_1->SetBinError(27,0.001842579);
   VbbHcc_both_Z_pt_stack_1->SetEntries(3542);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_both_Z_pt_stack_2 = new TH1D("VbbHcc_both_Z_pt_stack_2","",40,0,2000);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(1,0.1706729);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(2,0.397915);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(3,0.6861395);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(4,0.5786537);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(5,0.3695192);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(6,0.2012827);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(7,0.09743367);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(8,0.05899193);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(9,0.02246321);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(10,0.009032125);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(11,0.002638046);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(12,0.001731671);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(13,0.001258254);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(14,0.0008920649);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(15,0.0001769633);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(16,0.0003143911);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(21,0.0002398048);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(26,0.0002536154);
   VbbHcc_both_Z_pt_stack_2->SetBinError(1,0.006393387);
   VbbHcc_both_Z_pt_stack_2->SetBinError(2,0.00981765);
   VbbHcc_both_Z_pt_stack_2->SetBinError(3,0.01288869);
   VbbHcc_both_Z_pt_stack_2->SetBinError(4,0.01179472);
   VbbHcc_both_Z_pt_stack_2->SetBinError(5,0.009454007);
   VbbHcc_both_Z_pt_stack_2->SetBinError(6,0.006900567);
   VbbHcc_both_Z_pt_stack_2->SetBinError(7,0.004792504);
   VbbHcc_both_Z_pt_stack_2->SetBinError(8,0.003775109);
   VbbHcc_both_Z_pt_stack_2->SetBinError(9,0.002297381);
   VbbHcc_both_Z_pt_stack_2->SetBinError(10,0.001470208);
   VbbHcc_both_Z_pt_stack_2->SetBinError(11,0.0008024057);
   VbbHcc_both_Z_pt_stack_2->SetBinError(12,0.0006317041);
   VbbHcc_both_Z_pt_stack_2->SetBinError(13,0.0005717347);
   VbbHcc_both_Z_pt_stack_2->SetBinError(14,0.0004512719);
   VbbHcc_both_Z_pt_stack_2->SetBinError(15,0.0001769633);
   VbbHcc_both_Z_pt_stack_2->SetBinError(16,0.0003143911);
   VbbHcc_both_Z_pt_stack_2->SetBinError(21,0.0002398048);
   VbbHcc_both_Z_pt_stack_2->SetBinError(26,0.0002536154);
   VbbHcc_both_Z_pt_stack_2->SetEntries(11286);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_both_17->Modified();
   Z_pt_both_17->cd();
   Z_pt_both_17->SetSelected(Z_pt_both_17);
}
