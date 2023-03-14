#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_17_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Fri Mar 10 11:27:14 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2183529,-0.3001132,1.171633,0.98869);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetFillStyle(4000);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLogy();
   Aplanarity_algo_17->SetLeftMargin(0.15709);
   Aplanarity_algo_17->SetRightMargin(0.1234783);
   Aplanarity_algo_17->SetBottomMargin(0.12);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(6.247059);
   
   TH1F *st_stack_126 = new TH1F("st_stack_126","",50,0,1);
   st_stack_126->SetMinimum(0.7153906);
   st_stack_126->SetMaximum(7.241185);
   st_stack_126->SetDirectory(0);
   st_stack_126->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_126->SetLineColor(ci);
   st_stack_126->GetXaxis()->SetTitle("Aplanarity");
   st_stack_126->GetXaxis()->SetRange(1,50);
   st_stack_126->GetXaxis()->SetLabelFont(42);
   st_stack_126->GetXaxis()->SetTitleOffset(1);
   st_stack_126->GetXaxis()->SetTitleFont(42);
   st_stack_126->GetYaxis()->SetTitle("Event/0.02");
   st_stack_126->GetYaxis()->SetLabelFont(42);
   st_stack_126->GetYaxis()->SetTitleSize(0.037);
   st_stack_126->GetYaxis()->SetTitleFont(42);
   st_stack_126->GetZaxis()->SetLabelFont(42);
   st_stack_126->GetZaxis()->SetTitleOffset(1);
   st_stack_126->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_126);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,3.864932);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,2.972657);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,1.834208);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,1.274766);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,0.8271065);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,0.5877479);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,0.4281201);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,0.3062005);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,0.2338517);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,0.1715912);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,0.1321319);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,0.07062656);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,0.05292533);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,0.04153458);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,0.02660342);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,0.01531288);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,0.01747013);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(18,0.01341857);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(19,0.004012815);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(20,0.001842579);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(22,0.001931467);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,0.08493158);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,0.07481698);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,0.05918766);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,0.04921987);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,0.0395751);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,0.03357714);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,0.02869968);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,0.02417691);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,0.02099725);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,0.01817869);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,0.01576485);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,0.01164664);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,0.009946955);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,0.008937967);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,0.007308516);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,0.005161388);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,0.005619153);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(18,0.005075001);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(19,0.002837494);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(20,0.001842579);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(22,0.001931467);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(7553);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,1.320127);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1.071685);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,0.7128436);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,0.4708588);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,0.3248074);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,0.2381652);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,0.1560285);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,0.09764078);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,0.07364225);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.05321122);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.03370265);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.024619);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,0.02085613);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.007793269);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.00629648);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,0.001366942);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,0.001996294);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,0.001380986);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,0.000318965);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(20,0.0001784253);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(24,0.0001574125);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,0.01770064);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,0.01605051);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,0.01314315);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,0.01067456);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,0.008899057);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,0.007596042);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.006154371);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.004859085);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.004233548);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.003622471);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.002868296);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.002445853);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,0.002259742);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.001396344);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.001246942);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,0.0005715943);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,0.0007148841);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,0.0005732545);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,0.0002256193);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(20,0.0001784253);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(24,0.0001574125);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(20065);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
