#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_all_logY()
{
//=========Macro generated from canvas: H_dR_both_all/H_dR_both_all
//=========  (Tue Feb 14 10:43:08 2023) by ROOT version 6.26/06
   TCanvas *H_dR_both_all = new TCanvas("H_dR_both_all", "H_dR_both_all",0,0,600,600);
   H_dR_both_all->SetHighLightColor(2);
   H_dR_both_all->Range(-1.353788,0.4010915,7.264125,3.134452);
   H_dR_both_all->SetFillColor(0);
   H_dR_both_all->SetFillStyle(4000);
   H_dR_both_all->SetBorderMode(0);
   H_dR_both_all->SetBorderSize(2);
   H_dR_both_all->SetLogy();
   H_dR_both_all->SetLeftMargin(0.15709);
   H_dR_both_all->SetRightMargin(0.1234783);
   H_dR_both_all->SetBottomMargin(0.12);
   H_dR_both_all->SetFrameFillStyle(1000);
   H_dR_both_all->SetFrameBorderMode(0);
   H_dR_both_all->SetFrameFillStyle(1000);
   H_dR_both_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(539.4426);
   
   TH1F *st_stack_152 = new TH1F("st_stack_152","",30,0,6);
   st_stack_152->SetMinimum(5.359135);
   st_stack_152->SetMaximum(726.2996);
   st_stack_152->SetDirectory(0);
   st_stack_152->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_152->SetLineColor(ci);
   st_stack_152->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_152->GetXaxis()->SetRange(1,31);
   st_stack_152->GetXaxis()->SetLabelFont(42);
   st_stack_152->GetXaxis()->SetTitleOffset(1);
   st_stack_152->GetXaxis()->SetTitleFont(42);
   st_stack_152->GetYaxis()->SetTitle("Events/0.2");
   st_stack_152->GetYaxis()->SetLabelFont(42);
   st_stack_152->GetYaxis()->SetTitleSize(0.037);
   st_stack_152->GetYaxis()->SetTitleFont(42);
   st_stack_152->GetZaxis()->SetLabelFont(42);
   st_stack_152->GetZaxis()->SetTitleOffset(1);
   st_stack_152->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_152);
   
   
   TH1D *VbbHcc_both_H_dR_all_stack_1 = new TH1D("VbbHcc_both_H_dR_all_stack_1","",30,0,6);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(3,0.9906212);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(4,1.966126);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(5,2.461545);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(6,3.396247);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(7,3.755056);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(8,3.869231);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(9,3.92384);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(10,3.968732);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(11,3.834049);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(12,3.812725);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(13,3.954866);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(14,4.01343);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(15,4.081874);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(16,4.232241);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(17,1.608403);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(18,0.8094121);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(19,0.5135016);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(20,0.3051048);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(21,0.2004112);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(22,0.1365225);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(23,0.09585573);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(24,0.06223176);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(25,0.03336198);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(26,0.006806866);
   VbbHcc_both_H_dR_all_stack_1->SetBinContent(27,0.002700465);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(3,0.05135824);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(4,0.07233139);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(5,0.07889648);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(6,0.1015847);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(7,0.09727842);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(8,0.1018452);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(9,0.09967567);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(10,0.1011954);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(11,0.1013258);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(12,0.09886675);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(13,0.1021185);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(14,0.1025352);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(15,0.1020319);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(16,0.1044892);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(17,0.06400598);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(18,0.04516709);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(19,0.03502065);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(20,0.02721109);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(21,0.02137941);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(22,0.01819503);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(23,0.01610516);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(24,0.01197578);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(25,0.00877528);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(26,0.003730268);
   VbbHcc_both_H_dR_all_stack_1->SetBinError(27,0.002700465);
   VbbHcc_both_H_dR_all_stack_1->SetEntries(23382);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_both_H_dR_all_stack_2 = new TH1D("VbbHcc_both_H_dR_all_stack_2","",30,0,6);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(3,0.3281362);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(4,0.6493085);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(5,0.9209551);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(6,1.298951);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(7,1.572601);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(8,1.525194);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(9,1.381171);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(10,1.200024);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(11,0.9742522);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(12,0.9783056);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(13,0.9860285);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(14,0.996858);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(15,1.086271);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(16,1.081821);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(17,0.5230342);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(18,0.3265683);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(19,0.2101972);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(20,0.1341485);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(21,0.09701288);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(22,0.05079371);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(23,0.03593399);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(24,0.02322238);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(25,0.01636418);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(26,0.007865931);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(27,0.003518981);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(28,0.002347679);
   VbbHcc_both_H_dR_all_stack_2->SetBinContent(29,0.0002658739);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(3,0.01084326);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(4,0.02004277);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(5,0.01730978);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(6,0.02161741);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(7,0.02315081);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(8,0.02218948);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(9,0.0211883);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(10,0.01988918);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(11,0.01767843);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(12,0.0178303);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(13,0.02242866);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(14,0.01789114);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(15,0.01896681);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(16,0.01938216);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(17,0.01342013);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(18,0.01063569);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(19,0.008215074);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(20,0.006566248);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(21,0.005762597);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(22,0.004085804);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(23,0.003371622);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(24,0.002977721);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(25,0.00234501);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(26,0.00160273);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(27,0.001096261);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(28,0.000909096);
   VbbHcc_both_H_dR_all_stack_2->SetBinError(29,0.0002658739);
   VbbHcc_both_H_dR_all_stack_2->SetEntries(54951);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_dR_all_stack_1","ZHcc","F");

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
   H_dR_both_all->Modified();
   H_dR_both_all->cd();
   H_dR_both_all->SetSelected(H_dR_both_all);
}
