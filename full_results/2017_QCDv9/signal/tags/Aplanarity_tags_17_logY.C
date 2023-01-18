#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Wed Jan 18 11:42:13 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2183529,0.4647114,1.171633,2.87809);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetFillStyle(4000);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLogy();
   Aplanarity_tags_17->SetLeftMargin(0.15709);
   Aplanarity_tags_17->SetRightMargin(0.1234783);
   Aplanarity_tags_17->SetBottomMargin(0.12);
   Aplanarity_tags_17->SetFrameFillStyle(1000);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameFillStyle(1000);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(332.1868);
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",50,0,1);
   st_stack_62->SetMinimum(5.679588);
   st_stack_62->SetMaximum(433.2634);
   st_stack_62->SetDirectory(0);
   st_stack_62->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_62->SetLineColor(ci);
   st_stack_62->GetXaxis()->SetTitle("Aplanarity");
   st_stack_62->GetXaxis()->SetRange(1,50);
   st_stack_62->GetXaxis()->SetLabelFont(42);
   st_stack_62->GetXaxis()->SetTitleOffset(1);
   st_stack_62->GetXaxis()->SetTitleFont(42);
   st_stack_62->GetYaxis()->SetTitle("Events/0.02");
   st_stack_62->GetYaxis()->SetLabelFont(42);
   st_stack_62->GetYaxis()->SetTitleSize(0.037);
   st_stack_62->GetYaxis()->SetTitleFont(42);
   st_stack_62->GetZaxis()->SetLabelFont(42);
   st_stack_62->GetZaxis()->SetTitleOffset(1);
   st_stack_62->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_62);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,2.543678);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,1.988292);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,1.35254);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,0.9862726);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,0.6832213);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,0.5245381);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,0.375305);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,0.3217659);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,0.2146159);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,0.1551859);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,0.1109723);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,0.08266818);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,0.05492451);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,0.03891625);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,0.03711199);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,0.01116492);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,0.007030289);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,0.009658568);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,0.003464206);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,0.00506049);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.06779473);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.06042145);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.05001644);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.04209244);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.0360417);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.0307502);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.02625323);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,0.02465285);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,0.02036847);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,0.01700841);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,0.01406715);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,0.01184543);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,0.01005102);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,0.0082966);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,0.008051058);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,0.004589152);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,0.00353403);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,0.0043252);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,0.002482452);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,0.002927309);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(6355);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,0.7781899);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,0.5768516);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,0.4035872);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,0.2697269);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,0.1868414);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,0.1362686);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.09631177);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.06283087);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.03956938);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.02457769);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.01750992);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.01223887);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.008523909);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.004558949);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.00422478);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,0.002580273);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.001628116);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,2.347871e-05);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,0.0004818131);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.01367815);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.01190381);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.009940192);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.008189379);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.006767507);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.005817904);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.004904742);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.003954111);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.003132081);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.002463356);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.002063072);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.001751752);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.001461467);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.001029081);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.001056543);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.0008059303);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.0006695444);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,2.347871e-05);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,0.0003428063);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(12362);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
