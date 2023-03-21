#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Mon Mar 20 11:49:46 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2183529,-0.3536127,1.171633,1.182619);
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
   st->SetMinimum(1);
   st->SetMaximum(8.97871);
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",50,0,1);
   st_stack_62->SetMinimum(0.6772283);
   st_stack_62->SetMaximum(10.69044);
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
   st_stack_62->GetYaxis()->SetTitle("Event/0.02");
   st_stack_62->GetYaxis()->SetLabelFont(42);
   st_stack_62->GetYaxis()->SetTitleSize(0.037);
   st_stack_62->GetYaxis()->SetTitleFont(42);
   st_stack_62->GetZaxis()->SetLabelFont(42);
   st_stack_62->GetZaxis()->SetTitleOffset(1);
   st_stack_62->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_62);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,5.270136);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,0.5363915);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,0.1194266);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,0.0412945);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,0.02032669);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,0.005344105);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,0.001724338);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,0.003955184);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,0.001966814);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,0.001318812);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.0999336);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.03176208);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.01488566);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.00862601);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.006234688);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.003137541);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.00152248);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,0.002796968);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,0.001966814);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,0.001318812);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(3477);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);
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
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,2.182193);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,0.2616003);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,0.05582537);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,0.01835292);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,0.009368254);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,0.001288163);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.001835337);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.001835368);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.0008246945);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.0002624265);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.001144881);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.0003035396);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.02292917);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.007933527);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.003640079);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.002097739);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.001513718);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.0005038674);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.000653949);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.000657815);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.0004268192);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.0002624265);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.0005189753);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.0003035396);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(11007);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
