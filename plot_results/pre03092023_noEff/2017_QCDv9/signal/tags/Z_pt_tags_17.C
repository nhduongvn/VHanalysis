#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_17()
{
//=========Macro generated from canvas: Z_pt_tags_17/Z_pt_tags_17
//=========  (Thu Feb 16 10:35:18 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_tags_17 = new TCanvas("Z_pt_tags_17", "Z_pt_tags_17",0,0,600,600);
   Z_pt_tags_17->SetHighLightColor(2);
   Z_pt_tags_17->Range(37.97653,-0.3460191,1705.96,2.537473);
   Z_pt_tags_17->SetFillColor(0);
   Z_pt_tags_17->SetFillStyle(4000);
   Z_pt_tags_17->SetBorderMode(0);
   Z_pt_tags_17->SetBorderSize(2);
   Z_pt_tags_17->SetLeftMargin(0.15709);
   Z_pt_tags_17->SetRightMargin(0.1234783);
   Z_pt_tags_17->SetBottomMargin(0.12);
   Z_pt_tags_17->SetFrameFillStyle(1000);
   Z_pt_tags_17->SetFrameBorderMode(0);
   Z_pt_tags_17->SetFrameFillStyle(1000);
   Z_pt_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.249124);
   
   TH1F *st_stack_10 = new TH1F("st_stack_10","",40,0,2000);
   st_stack_10->SetMinimum(0);
   st_stack_10->SetMaximum(2.249124);
   st_stack_10->SetDirectory(0);
   st_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_10->SetLineColor(ci);
   st_stack_10->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_10->GetXaxis()->SetRange(7,30);
   st_stack_10->GetXaxis()->SetLabelFont(42);
   st_stack_10->GetXaxis()->SetTitleOffset(1);
   st_stack_10->GetXaxis()->SetTitleFont(42);
   st_stack_10->GetYaxis()->SetTitle("Events/50.0");
   st_stack_10->GetYaxis()->SetLabelFont(42);
   st_stack_10->GetYaxis()->SetTitleSize(0.037);
   st_stack_10->GetYaxis()->SetTitleFont(42);
   st_stack_10->GetZaxis()->SetLabelFont(42);
   st_stack_10->GetZaxis()->SetTitleOffset(1);
   st_stack_10->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_10);
   
   
   TH1D *VbbHcc_tags_Z_pt_stack_1 = new TH1D("VbbHcc_tags_Z_pt_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(1,0.524257);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(2,1.161751);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(3,1.499416);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(4,1.102497);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(5,0.762904);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(6,0.4139208);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(7,0.2459971);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(8,0.1479056);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(9,0.0718932);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(10,0.02932942);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(11,0.01160745);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(12,0.005748193);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(13,0.007224517);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(14,0.005322883);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(15,0.006328098);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(18,0.001938755);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(26,0.002001313);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(27,0.001842579);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(1,0.03169151);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(2,0.0468262);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(3,0.05310877);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(4,0.04584336);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(5,0.03798264);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(6,0.02805108);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(7,0.02129183);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(8,0.01651337);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(9,0.0115387);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(10,0.007644642);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(11,0.005558527);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(12,0.003324308);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(13,0.003689831);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(14,0.003074602);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(15,0.003670836);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(18,0.001938755);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(26,0.002001313);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(27,0.001842579);
   VbbHcc_tags_Z_pt_stack_1->SetEntries(3477);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_2 = new TH1D("VbbHcc_tags_Z_pt_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(1,0.1664004);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(2,0.3903685);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(3,0.669647);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(4,0.563329);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(5,0.3605665);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(6,0.1950232);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(7,0.09483696);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(8,0.05733763);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(9,0.0210304);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(10,0.008601457);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(11,0.002638046);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(12,0.001731671);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(13,0.001446927);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(14,0.0008920649);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(15,0.0001769633);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(16,0.0003143911);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(21,0.0002398048);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(26,0.0002536154);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(1,0.006312307);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(2,0.009721703);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(3,0.01272896);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(4,0.01164392);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(5,0.009340134);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(6,0.006794539);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(7,0.004721415);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(8,0.003720857);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(9,0.002219449);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(10,0.001436974);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(11,0.0008024057);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(12,0.0006317041);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(13,0.0006020615);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(14,0.0004512719);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(15,0.0001769633);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(16,0.0003143911);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(21,0.0002398048);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(26,0.0002536154);
   VbbHcc_tags_Z_pt_stack_2->SetEntries(11007);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_tags_17->Modified();
   Z_pt_tags_17->cd();
   Z_pt_tags_17->SetSelected(Z_pt_tags_17);
}
