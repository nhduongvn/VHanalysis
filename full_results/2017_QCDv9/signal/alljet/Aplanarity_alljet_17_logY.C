#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_17_logY()
{
//=========Macro generated from canvas: Aplanarity_alljet_17/Aplanarity_alljet_17
//=========  (Wed Jan 18 11:42:16 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_17 = new TCanvas("Aplanarity_alljet_17", "Aplanarity_alljet_17",0,0,600,600);
   Aplanarity_alljet_17->SetHighLightColor(2);
   Aplanarity_alljet_17->Range(-0.2183529,-0.1180582,1.171633,5.441908);
   Aplanarity_alljet_17->SetFillColor(0);
   Aplanarity_alljet_17->SetFillStyle(4000);
   Aplanarity_alljet_17->SetBorderMode(0);
   Aplanarity_alljet_17->SetBorderSize(2);
   Aplanarity_alljet_17->SetLogy();
   Aplanarity_alljet_17->SetLeftMargin(0.15709);
   Aplanarity_alljet_17->SetRightMargin(0.1234783);
   Aplanarity_alljet_17->SetBottomMargin(0.12);
   Aplanarity_alljet_17->SetFrameFillStyle(1000);
   Aplanarity_alljet_17->SetFrameBorderMode(0);
   Aplanarity_alljet_17->SetFrameFillStyle(1000);
   Aplanarity_alljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(44459.8);
   
   TH1F *st_stack_254 = new TH1F("st_stack_254","",50,0,1);
   st_stack_254->SetMinimum(3.541097);
   st_stack_254->SetMaximum(76897.38);
   st_stack_254->SetDirectory(0);
   st_stack_254->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_254->SetLineColor(ci);
   st_stack_254->GetXaxis()->SetTitle("Aplanarity");
   st_stack_254->GetXaxis()->SetRange(1,50);
   st_stack_254->GetXaxis()->SetLabelFont(42);
   st_stack_254->GetXaxis()->SetTitleOffset(1);
   st_stack_254->GetXaxis()->SetTitleFont(42);
   st_stack_254->GetYaxis()->SetTitle("Events/0.02");
   st_stack_254->GetYaxis()->SetLabelFont(42);
   st_stack_254->GetYaxis()->SetTitleSize(0.037);
   st_stack_254->GetYaxis()->SetTitleFont(42);
   st_stack_254->GetZaxis()->SetLabelFont(42);
   st_stack_254->GetZaxis()->SetTitleOffset(1);
   st_stack_254->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_254);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(1,396.311);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(2,111.5616);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(3,60.91889);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(4,39.32317);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(5,26.34817);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(6,18.65517);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(7,13.4748);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(8,9.390969);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(9,7.188736);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(10,5.110791);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(11,3.606999);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(12,2.591935);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(13,1.743503);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(14,1.295695);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(15,0.8327882);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(16,0.5247956);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(17,0.3209191);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(18,0.1945824);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(19,0.09587106);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(20,0.04856339);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(21,0.0205921);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(22,0.01420429);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(23,0.003729766);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(1,0.8575099);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(2,0.4544531);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(3,0.3362991);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(4,0.2696768);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(5,0.2205143);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(6,0.1858117);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(7,0.1583255);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(8,0.1321251);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(9,0.1156895);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(10,0.09655532);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(11,0.08176927);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(12,0.06926892);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(13,0.05648458);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(14,0.04896269);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(15,0.0393168);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(16,0.03100851);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(17,0.02453077);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(18,0.01900849);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(19,0.01335483);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(20,0.009950345);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(21,0.006265959);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(22,0.005058707);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(23,0.002646089);
   VbbHcc_alljet_Aplanarity_stack_1->SetEntries(483027);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(1,48.28705);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(2,19.15683);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(3,10.85851);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(4,6.831975);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(5,4.468338);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(6,3.003153);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(7,2.021477);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(8,1.366696);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(9,0.9244451);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(10,0.6098259);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(11,0.4314028);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(12,0.2920538);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(13,0.1969904);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(14,0.1158263);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(15,0.07807852);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(16,0.04401632);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(17,0.02736512);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(18,0.01913124);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(19,0.007791895);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(20,0.003431783);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(21,0.002618633);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(23,0.0001843075);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(1,0.1074617);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(2,0.06860145);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(3,0.05187684);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(4,0.04124022);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(5,0.03335978);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(6,0.02735178);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(7,0.02249248);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(8,0.01845691);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(9,0.0151766);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(10,0.01231847);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(11,0.01039438);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(12,0.008490795);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(13,0.007025711);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(14,0.005375438);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(15,0.004405387);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(16,0.003274434);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(17,0.002606019);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(18,0.002143851);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(19,0.001356961);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(20,0.0008993359);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(21,0.0008100049);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(23,0.0001843075);
   VbbHcc_alljet_Aplanarity_stack_2->SetEntries(462625);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_alljet_17->Modified();
   Aplanarity_alljet_17->cd();
   Aplanarity_alljet_17->SetSelected(Aplanarity_alljet_17);
}
