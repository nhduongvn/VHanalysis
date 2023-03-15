#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_all()
{
//=========Macro generated from canvas: Z_dR_tags_all/Z_dR_tags_all
//=========  (Tue Feb 14 15:57:08 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_all = new TCanvas("Z_dR_tags_all", "Z_dR_tags_all",0,0,600,600);
   Z_dR_tags_all->SetHighLightColor(2);
   Z_dR_tags_all->Range(-1.310117,-1.621755,7.029799,11.89287);
   Z_dR_tags_all->SetFillColor(0);
   Z_dR_tags_all->SetFillStyle(4000);
   Z_dR_tags_all->SetBorderMode(0);
   Z_dR_tags_all->SetBorderSize(2);
   Z_dR_tags_all->SetLeftMargin(0.15709);
   Z_dR_tags_all->SetRightMargin(0.1234783);
   Z_dR_tags_all->SetBottomMargin(0.12);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   Z_dR_tags_all->SetFrameFillStyle(1000);
   Z_dR_tags_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(10.54141);
   
   TH1F *st_stack_20 = new TH1F("st_stack_20","",30,0,6);
   st_stack_20->SetMinimum(0);
   st_stack_20->SetMaximum(10.54141);
   st_stack_20->SetDirectory(0);
   st_stack_20->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_20->SetLineColor(ci);
   st_stack_20->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_20->GetXaxis()->SetRange(1,30);
   st_stack_20->GetXaxis()->SetLabelFont(42);
   st_stack_20->GetXaxis()->SetTitleOffset(1);
   st_stack_20->GetXaxis()->SetTitleFont(42);
   st_stack_20->GetYaxis()->SetTitle("Events/0.2");
   st_stack_20->GetYaxis()->SetLabelFont(42);
   st_stack_20->GetYaxis()->SetTitleSize(0.037);
   st_stack_20->GetYaxis()->SetTitleFont(42);
   st_stack_20->GetZaxis()->SetLabelFont(42);
   st_stack_20->GetZaxis()->SetTitleOffset(1);
   st_stack_20->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_20);
   
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_1 = new TH1D("VbbHcc_tags_Z_dR_all_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(3,2.189559);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(4,3.72547);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(5,4.431704);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(6,4.860114);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(7,4.457299);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(8,4.09932);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(9,3.890458);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(10,3.281333);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(11,3.10238);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(12,2.946328);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(13,2.803748);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(14,2.826638);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(15,3.183553);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(16,2.871447);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(17,1.0213);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(18,0.475249);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(19,0.2560144);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(20,0.1638535);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(21,0.09785441);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(22,0.06550191);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(23,0.03200263);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(24,0.01918568);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(25,0.00436215);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(26,0.002532203);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinContent(27,0.003692858);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(3,0.07664167);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(4,0.09734299);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(5,0.1088072);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(6,0.1186273);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(7,0.1057869);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(8,0.1030372);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(9,0.1028485);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(10,0.09407153);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(11,0.08810423);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(12,0.08612289);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(13,0.0845034);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(14,0.08507981);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(15,0.08999062);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(16,0.08634044);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(17,0.05055673);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(18,0.03438593);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(19,0.02680379);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(20,0.02003463);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(21,0.01618286);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(22,0.01246598);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(23,0.008399799);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(24,0.006844545);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(25,0.00311122);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(26,0.002532203);
   VbbHcc_tags_Z_dR_all_stack_1->SetBinError(27,0.00270968);
   VbbHcc_tags_Z_dR_all_stack_1->SetEntries(22839);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_all_stack_2 = new TH1D("VbbHcc_tags_Z_dR_all_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(2,0.0005272769);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(3,0.7818131);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(4,1.700336);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(5,2.131037);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(6,2.167491);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(7,1.758703);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(8,1.186209);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(9,0.8342871);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(10,0.6802525);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(11,0.5831017);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(12,0.5962433);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(13,0.6481667);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(14,0.6782029);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(15,0.742094);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(16,0.7316278);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(17,0.3269619);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(18,0.1658048);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(19,0.0987779);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(20,0.06110562);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(21,0.03653872);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(22,0.02062267);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(23,0.01231948);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(24,0.007708009);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(25,0.00465409);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(26,0.0003373836);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(27,0.0002003603);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinContent(28,0.0010673);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(2,0.0004046273);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(3,0.01647338);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(4,0.02366646);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(5,0.02670249);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(6,0.02730546);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(7,0.02744667);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(8,0.02387953);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(9,0.01645203);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(10,0.01483848);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(11,0.01380282);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(12,0.01417387);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(13,0.01494754);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(14,0.0148916);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(15,0.01558737);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(16,0.0159657);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(17,0.01089856);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(18,0.007177995);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(19,0.005578298);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(20,0.004399505);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(21,0.003367561);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(22,0.002517476);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(23,0.001977952);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(24,0.001489125);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(25,0.001301977);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(26,0.0002395385);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(27,0.0002003603);
   VbbHcc_tags_Z_dR_all_stack_2->SetBinError(28,0.0006173723);
   VbbHcc_tags_Z_dR_all_stack_2->SetEntries(53399);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_all_stack_1","ZHcc","F");

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
   Z_dR_tags_all->Modified();
   Z_dR_tags_all->cd();
   Z_dR_tags_all->SetSelected(Z_dR_tags_all);
}
