#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Tue Feb 14 16:07:57 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2183529,0.3693769,1.171633,3.264611);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetFillStyle(4000);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15709);
   Aplanarity_both_17->SetRightMargin(0.1234783);
   Aplanarity_both_17->SetBottomMargin(0.12);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameFillStyle(1000);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(690.3367);
   
   TH1F *st_stack_190 = new TH1F("st_stack_190","",50,0,1);
   st_stack_190->SetMinimum(5.209607);
   st_stack_190->SetMaximum(944.251);
   st_stack_190->SetDirectory(0);
   st_stack_190->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_190->SetLineColor(ci);
   st_stack_190->GetXaxis()->SetTitle("Aplanarity");
   st_stack_190->GetXaxis()->SetRange(1,50);
   st_stack_190->GetXaxis()->SetLabelFont(42);
   st_stack_190->GetXaxis()->SetTitleOffset(1);
   st_stack_190->GetXaxis()->SetTitleFont(42);
   st_stack_190->GetYaxis()->SetTitle("Events/0.02");
   st_stack_190->GetYaxis()->SetLabelFont(42);
   st_stack_190->GetYaxis()->SetTitleSize(0.037);
   st_stack_190->GetYaxis()->SetTitleFont(42);
   st_stack_190->GetZaxis()->SetLabelFont(42);
   st_stack_190->GetZaxis()->SetTitleOffset(1);
   st_stack_190->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_190);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,5.150234);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,3.512291);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,2.494095);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,1.7726);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,1.235698);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,0.9654336);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.6328324);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.4833024);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,0.3363985);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,0.2731585);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.1972124);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,0.1352242);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,0.08983423);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,0.06623546);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,0.05367997);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.01789363);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,0.0214326);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,0.008690399);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,0.009414504);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(20,0.00373852);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(22,0.001319221);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.09800556);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.0821217);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.06877974);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.05834165);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.0479331);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.04299969);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.03499948);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.03007002);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,0.0255483);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,0.02263158);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.01977749);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,0.01592532);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,0.0128618);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,0.01143438);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,0.009809146);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.006612319);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,0.006270486);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,0.003936422);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,0.004288372);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(20,0.002648609);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(22,0.001319221);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(10111);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,1.753133);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,1.253746);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,0.7872489);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.5282564);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.3632089);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.2596311);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.1710726);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.1222197);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.08664662);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.05675605);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.04047626);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.02667555);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.01879959);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.01067433);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.007375225);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.003564789);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.002308629);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.0008566117);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.001096885);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.0003777439);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,0.0004800258);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.02045435);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.01740363);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.013769);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.01130197);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.009417169);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.007930866);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.006446532);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.005459722);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.004628562);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.003752197);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.003135303);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.002584169);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.002163179);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.001624402);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.001327986);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.0009294484);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.0007480932);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.0004323865);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.0005031549);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.0002761903);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,0.0003412046);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(23807);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
