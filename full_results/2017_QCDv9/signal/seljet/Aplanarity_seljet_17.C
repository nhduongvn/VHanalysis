#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_17()
{
//=========Macro generated from canvas: Aplanarity_seljet_17/Aplanarity_seljet_17
//=========  (Wed Jan 18 11:40:27 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_17 = new TCanvas("Aplanarity_seljet_17", "Aplanarity_seljet_17",0,0,600,600);
   Aplanarity_seljet_17->SetHighLightColor(2);
   Aplanarity_seljet_17->Range(-0.2183529,-20.81433,1.171633,152.6384);
   Aplanarity_seljet_17->SetFillColor(0);
   Aplanarity_seljet_17->SetFillStyle(4000);
   Aplanarity_seljet_17->SetBorderMode(0);
   Aplanarity_seljet_17->SetBorderSize(2);
   Aplanarity_seljet_17->SetLeftMargin(0.15709);
   Aplanarity_seljet_17->SetRightMargin(0.1234783);
   Aplanarity_seljet_17->SetBottomMargin(0.12);
   Aplanarity_seljet_17->SetFrameFillStyle(1000);
   Aplanarity_seljet_17->SetFrameBorderMode(0);
   Aplanarity_seljet_17->SetFrameFillStyle(1000);
   Aplanarity_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(135.2932);
   
   TH1F *st_stack_318 = new TH1F("st_stack_318","",50,0,1);
   st_stack_318->SetMinimum(0);
   st_stack_318->SetMaximum(135.2932);
   st_stack_318->SetDirectory(0);
   st_stack_318->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_318->SetLineColor(ci);
   st_stack_318->GetXaxis()->SetTitle("Aplanarity");
   st_stack_318->GetXaxis()->SetRange(1,50);
   st_stack_318->GetXaxis()->SetLabelFont(42);
   st_stack_318->GetXaxis()->SetTitleOffset(1);
   st_stack_318->GetXaxis()->SetTitleFont(42);
   st_stack_318->GetYaxis()->SetTitle("Events/0.02");
   st_stack_318->GetYaxis()->SetLabelFont(42);
   st_stack_318->GetYaxis()->SetTitleSize(0.037);
   st_stack_318->GetYaxis()->SetTitleFont(42);
   st_stack_318->GetZaxis()->SetLabelFont(42);
   st_stack_318->GetZaxis()->SetTitleOffset(1);
   st_stack_318->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_318);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,70.30008);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,54.74274);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,37.02417);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,25.89405);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,17.94557);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,13.23844);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,9.650952);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,6.872925);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,5.212158);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,3.793159);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,2.770007);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,1.933026);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,1.328735);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,0.966362);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,0.6284669);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,0.3956836);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,0.2309887);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,0.1379975);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,0.07877926);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,0.04040327);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,0.01176792);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(22,0.010945);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,0.3533268);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,0.314935);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,0.2597686);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,0.2168803);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,0.1809062);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,0.1555754);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,0.1334031);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,0.1123876);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,0.09801976);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,0.08255037);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,0.07125028);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,0.05937812);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,0.04930152);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,0.04206074);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,0.03414541);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,0.02708947);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,0.02071785);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,0.01610514);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,0.01212656);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,0.00923684);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,0.005062763);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(22,0.004499263);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(167881);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,19.89535);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,14.74239);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,9.636839);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,6.426794);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,4.346249);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,2.943658);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,2.00524);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,1.370133);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,0.9397171);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,0.6151212);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,0.4439466);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,0.2917647);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,0.197815);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,0.1181672);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,0.07508463);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,0.04478496);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,0.02750305);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,0.01991212);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,0.006877601);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,0.003966646);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,0.00211218);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(23,0.0001843075);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,0.06916613);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,0.05998712);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,0.04867644);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,0.03980289);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,0.03277082);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,0.02696914);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,0.02230853);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,0.01839753);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,0.01526015);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,0.01233069);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,0.01048992);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,0.008458234);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,0.007009455);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,0.005397715);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,0.004321482);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,0.003300512);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,0.002596928);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,0.002180765);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,0.001267421);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,0.0009778078);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,0.0007257385);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(23,0.0001843075);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(299433);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_seljet_17->Modified();
   Aplanarity_seljet_17->cd();
   Aplanarity_seljet_17->SetSelected(Aplanarity_seljet_17);
}
