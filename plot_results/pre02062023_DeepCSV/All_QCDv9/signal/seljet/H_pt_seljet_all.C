#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_seljet_all()
{
//=========Macro generated from canvas: H_pt_seljet_all/H_pt_seljet_all
//=========  (Wed Jan 18 11:40:27 2023) by ROOT version 6.26/06
   TCanvas *H_pt_seljet_all = new TCanvas("H_pt_seljet_all", "H_pt_seljet_all",0,0,600,600);
   H_pt_seljet_all->SetHighLightColor(2);
   H_pt_seljet_all->Range(37.97653,-79.81357,1705.96,585.2995);
   H_pt_seljet_all->SetFillColor(0);
   H_pt_seljet_all->SetFillStyle(4000);
   H_pt_seljet_all->SetBorderMode(0);
   H_pt_seljet_all->SetBorderSize(2);
   H_pt_seljet_all->SetLeftMargin(0.15709);
   H_pt_seljet_all->SetRightMargin(0.1234783);
   H_pt_seljet_all->SetBottomMargin(0.12);
   H_pt_seljet_all->SetFrameFillStyle(1000);
   H_pt_seljet_all->SetFrameBorderMode(0);
   H_pt_seljet_all->SetFrameFillStyle(1000);
   H_pt_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(518.7882);
   
   TH1F *st_stack_272 = new TH1F("st_stack_272","",40,0,2000);
   st_stack_272->SetMinimum(0);
   st_stack_272->SetMaximum(518.7882);
   st_stack_272->SetDirectory(0);
   st_stack_272->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_272->SetLineColor(ci);
   st_stack_272->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_272->GetXaxis()->SetRange(7,30);
   st_stack_272->GetXaxis()->SetLabelFont(42);
   st_stack_272->GetXaxis()->SetTitleOffset(1);
   st_stack_272->GetXaxis()->SetTitleFont(42);
   st_stack_272->GetYaxis()->SetTitle("Events/50.0");
   st_stack_272->GetYaxis()->SetLabelFont(42);
   st_stack_272->GetYaxis()->SetTitleSize(0.037);
   st_stack_272->GetYaxis()->SetTitleFont(42);
   st_stack_272->GetZaxis()->SetLabelFont(42);
   st_stack_272->GetZaxis()->SetTitleOffset(1);
   st_stack_272->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_272);
   
   
   TH1D *VbbHcc_seljet_H_pt_all_stack_1 = new TH1D("VbbHcc_seljet_H_pt_all_stack_1","",40,0,2000);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(1,293.138);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(2,345.8588);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(3,137.6548);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(4,40.11636);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(5,15.03004);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(6,6.298347);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(7,2.819623);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(8,1.417192);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(9,0.6417417);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(10,0.3175693);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(11,0.1622784);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(12,0.09366742);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(13,0.05530252);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(14,0.0206911);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(15,0.01796844);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(16,0.01200949);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(17,0.006508144);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(18,0.005864499);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(19,0.003691938);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(20,0.004890959);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinContent(25,0.001119176);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(1,0.7920279);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(2,0.8583302);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(3,0.536459);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(4,0.2878517);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(5,0.1758533);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(6,0.1131931);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(7,0.07565472);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(8,0.05447975);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(9,0.03572267);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(10,0.02484575);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(11,0.01822598);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(12,0.01335168);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(13,0.01095363);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(14,0.006365191);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(15,0.006170005);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(16,0.00427466);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(17,0.00365732);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(18,0.003473905);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(19,0.002652441);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(20,0.0028287);
   VbbHcc_seljet_H_pt_all_stack_1->SetBinError(25,0.001119176);
   VbbHcc_seljet_H_pt_all_stack_1->SetEntries(490549);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_H_pt_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_pt_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_H_pt_all_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_H_pt_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_pt_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_H_pt_all_stack_2 = new TH1D("VbbHcc_seljet_H_pt_all_stack_2","",40,0,2000);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(1,54.45549);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(2,79.1714);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(3,45.21527);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(4,20.98026);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(5,9.77182);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(6,4.481092);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(7,2.189227);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(8,1.08452);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(9,0.577929);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(10,0.2832129);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(11,0.1481385);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(12,0.09267222);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(13,0.04431824);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(14,0.03348041);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(15,0.02068513);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(16,0.01259046);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(17,0.007062809);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(18,0.003939214);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(19,0.004372236);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(20,0.002091999);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(21,0.001490283);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(22,0.0006777943);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(23,0.000534751);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(24,0.0001480239);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(25,0.000822985);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(26,0.0004053196);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(30,0.0001867829);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinContent(32,1.371525e-05);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(1,0.1264522);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(2,0.1522838);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(3,0.114775);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(4,0.07790676);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(5,0.05304881);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(6,0.03607041);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(7,0.02552713);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(8,0.01774659);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(9,0.01312732);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(10,0.009060511);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(11,0.006481067);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(12,0.005365937);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(13,0.003588855);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(14,0.003223428);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(15,0.002462368);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(16,0.002015708);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(17,0.001449376);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(18,0.001041959);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(19,0.001131814);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(20,0.000817374);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(21,0.0006446989);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(22,0.0005114229);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(23,0.0003151165);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(24,0.0001480239);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(25,0.0005629152);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(26,0.0002872163);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(30,0.0001867829);
   VbbHcc_seljet_H_pt_all_stack_2->SetBinError(32,1.371525e-05);
   VbbHcc_seljet_H_pt_all_stack_2->SetEntries(908823);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_H_pt_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_H_pt_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_H_pt_all_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_seljet_H_pt_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_H_pt_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_H_pt_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_H_pt_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_H_pt_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_H_pt_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_H_pt_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_seljet_all->Modified();
   H_pt_seljet_all->cd();
   H_pt_seljet_all->SetSelected(H_pt_seljet_all);
}
