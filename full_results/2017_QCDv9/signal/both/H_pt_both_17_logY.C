#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_both_17_logY()
{
//=========Macro generated from canvas: H_pt_both_17/H_pt_both_17
//=========  (Mon Dec 19 11:10:37 2022) by ROOT version 6.26/06
   TCanvas *H_pt_both_17 = new TCanvas("H_pt_both_17", "H_pt_both_17",0,0,600,600);
   H_pt_both_17->SetHighLightColor(2);
   H_pt_both_17->Range(37.97653,0.4436549,1705.96,2.962229);
   H_pt_both_17->SetFillColor(0);
   H_pt_both_17->SetFillStyle(4000);
   H_pt_both_17->SetBorderMode(0);
   H_pt_both_17->SetBorderSize(2);
   H_pt_both_17->SetLogy();
   H_pt_both_17->SetLeftMargin(0.15709);
   H_pt_both_17->SetRightMargin(0.1234783);
   H_pt_both_17->SetBottomMargin(0.12);
   H_pt_both_17->SetFrameFillStyle(1000);
   H_pt_both_17->SetFrameBorderMode(0);
   H_pt_both_17->SetFrameFillStyle(1000);
   H_pt_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(389.4286);
   
   TH1F *st_stack_126 = new TH1F("st_stack_126","",40,0,2000);
   st_stack_126->SetMinimum(5.570367);
   st_stack_126->SetMaximum(513.3002);
   st_stack_126->SetDirectory(0);
   st_stack_126->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_126->SetLineColor(ci);
   st_stack_126->GetXaxis()->SetTitle("H p_{T} [GeV]");
   st_stack_126->GetXaxis()->SetRange(7,30);
   st_stack_126->GetXaxis()->SetLabelFont(42);
   st_stack_126->GetXaxis()->SetTitleOffset(1);
   st_stack_126->GetXaxis()->SetTitleFont(42);
   st_stack_126->GetYaxis()->SetTitle("Events/50.0");
   st_stack_126->GetYaxis()->SetLabelFont(42);
   st_stack_126->GetYaxis()->SetTitleSize(0.037);
   st_stack_126->GetYaxis()->SetTitleFont(42);
   st_stack_126->GetZaxis()->SetLabelFont(42);
   st_stack_126->GetZaxis()->SetTitleOffset(1);
   st_stack_126->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_126);
   
   
   TH1D *VbbHcc_both_H_pt_stack_1 = new TH1D("VbbHcc_both_H_pt_stack_1","",40,0,2000);
   VbbHcc_both_H_pt_stack_1->SetBinContent(1,2.332781);
   VbbHcc_both_H_pt_stack_1->SetBinContent(2,3.894286);
   VbbHcc_both_H_pt_stack_1->SetBinContent(3,2.365707);
   VbbHcc_both_H_pt_stack_1->SetBinContent(4,1.251953);
   VbbHcc_both_H_pt_stack_1->SetBinContent(5,0.5039807);
   VbbHcc_both_H_pt_stack_1->SetBinContent(6,0.2713016);
   VbbHcc_both_H_pt_stack_1->SetBinContent(7,0.1285583);
   VbbHcc_both_H_pt_stack_1->SetBinContent(8,0.09694478);
   VbbHcc_both_H_pt_stack_1->SetBinContent(9,0.06591778);
   VbbHcc_both_H_pt_stack_1->SetBinContent(10,0.02483045);
   VbbHcc_both_H_pt_stack_1->SetBinContent(11,0.01653695);
   VbbHcc_both_H_pt_stack_1->SetBinContent(12,0.0105797);
   VbbHcc_both_H_pt_stack_1->SetBinContent(13,0.001789968);
   VbbHcc_both_H_pt_stack_1->SetBinContent(14,0.00443684);
   VbbHcc_both_H_pt_stack_1->SetBinContent(15,0.001259297);
   VbbHcc_both_H_pt_stack_1->SetBinContent(16,0.002984785);
   VbbHcc_both_H_pt_stack_1->SetBinContent(21,0.001251058);
   VbbHcc_both_H_pt_stack_1->SetBinContent(22,0.001646926);
   VbbHcc_both_H_pt_stack_1->SetBinError(1,0.06568576);
   VbbHcc_both_H_pt_stack_1->SetBinError(2,0.08422914);
   VbbHcc_both_H_pt_stack_1->SetBinError(3,0.06558683);
   VbbHcc_both_H_pt_stack_1->SetBinError(4,0.04749137);
   VbbHcc_both_H_pt_stack_1->SetBinError(5,0.02991575);
   VbbHcc_both_H_pt_stack_1->SetBinError(6,0.02233343);
   VbbHcc_both_H_pt_stack_1->SetBinError(7,0.01516389);
   VbbHcc_both_H_pt_stack_1->SetBinError(8,0.01322712);
   VbbHcc_both_H_pt_stack_1->SetBinError(9,0.01107375);
   VbbHcc_both_H_pt_stack_1->SetBinError(10,0.006528596);
   VbbHcc_both_H_pt_stack_1->SetBinError(11,0.005269008);
   VbbHcc_both_H_pt_stack_1->SetBinError(12,0.004139056);
   VbbHcc_both_H_pt_stack_1->SetBinError(13,0.001789968);
   VbbHcc_both_H_pt_stack_1->SetBinError(14,0.002562809);
   VbbHcc_both_H_pt_stack_1->SetBinError(15,0.001259297);
   VbbHcc_both_H_pt_stack_1->SetBinError(16,0.002136547);
   VbbHcc_both_H_pt_stack_1->SetBinError(21,0.001251058);
   VbbHcc_both_H_pt_stack_1->SetBinError(22,0.001646926);
   VbbHcc_both_H_pt_stack_1->SetEntries(7343);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_1,"");
   
   TH1D *VbbHcc_both_H_pt_stack_2 = new TH1D("VbbHcc_both_H_pt_stack_2","",40,0,2000);
   VbbHcc_both_H_pt_stack_2->SetBinContent(1,0.3698353);
   VbbHcc_both_H_pt_stack_2->SetBinContent(2,0.8317387);
   VbbHcc_both_H_pt_stack_2->SetBinContent(3,0.864179);
   VbbHcc_both_H_pt_stack_2->SetBinContent(4,0.5657357);
   VbbHcc_both_H_pt_stack_2->SetBinContent(5,0.286431);
   VbbHcc_both_H_pt_stack_2->SetBinContent(6,0.1281379);
   VbbHcc_both_H_pt_stack_2->SetBinContent(7,0.07598951);
   VbbHcc_both_H_pt_stack_2->SetBinContent(8,0.03669343);
   VbbHcc_both_H_pt_stack_2->SetBinContent(9,0.01500156);
   VbbHcc_both_H_pt_stack_2->SetBinContent(10,0.009760321);
   VbbHcc_both_H_pt_stack_2->SetBinContent(11,0.00409806);
   VbbHcc_both_H_pt_stack_2->SetBinContent(12,0.00406132);
   VbbHcc_both_H_pt_stack_2->SetBinContent(13,0.001486808);
   VbbHcc_both_H_pt_stack_2->SetBinContent(14,0.001264675);
   VbbHcc_both_H_pt_stack_2->SetBinContent(15,0.0004398772);
   VbbHcc_both_H_pt_stack_2->SetBinContent(16,0.0002504314);
   VbbHcc_both_H_pt_stack_2->SetBinContent(17,0.0001883914);
   VbbHcc_both_H_pt_stack_2->SetBinContent(18,4.945919e-06);
   VbbHcc_both_H_pt_stack_2->SetBinError(1,0.009501302);
   VbbHcc_both_H_pt_stack_2->SetBinError(2,0.01428384);
   VbbHcc_both_H_pt_stack_2->SetBinError(3,0.01453481);
   VbbHcc_both_H_pt_stack_2->SetBinError(4,0.01176579);
   VbbHcc_both_H_pt_stack_2->SetBinError(5,0.008339533);
   VbbHcc_both_H_pt_stack_2->SetBinError(6,0.005599479);
   VbbHcc_both_H_pt_stack_2->SetBinError(7,0.004241199);
   VbbHcc_both_H_pt_stack_2->SetBinError(8,0.003008609);
   VbbHcc_both_H_pt_stack_2->SetBinError(9,0.001852546);
   VbbHcc_both_H_pt_stack_2->SetBinError(10,0.001554034);
   VbbHcc_both_H_pt_stack_2->SetBinError(11,0.000964183);
   VbbHcc_both_H_pt_stack_2->SetBinError(12,0.001003792);
   VbbHcc_both_H_pt_stack_2->SetBinError(13,0.0006090731);
   VbbHcc_both_H_pt_stack_2->SetBinError(14,0.0005692945);
   VbbHcc_both_H_pt_stack_2->SetBinError(15,0.0002727358);
   VbbHcc_both_H_pt_stack_2->SetBinError(16,0.0002300917);
   VbbHcc_both_H_pt_stack_2->SetBinError(17,0.0001883914);
   VbbHcc_both_H_pt_stack_2->SetBinError(18,4.945919e-06);
   VbbHcc_both_H_pt_stack_2->SetEntries(15101);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_H_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_H_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_H_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_H_pt_stack_1","ZHcc","F");

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
   H_pt_both_17->Modified();
   H_pt_both_17->cd();
   H_pt_both_17->SetSelected(H_pt_both_17);
}
