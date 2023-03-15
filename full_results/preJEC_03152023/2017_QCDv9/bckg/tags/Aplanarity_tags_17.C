#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_17()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Mar  9 13:18:49 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2183529,-711942.7,1.171633,5220913);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetFillStyle(4000);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
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
   st->SetMaximum(4627627);
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",50,0,1);
   st_stack_62->SetMinimum(0);
   st_stack_62->SetMaximum(4627627);
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
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,3518381);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,1735609);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,922446.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,536740.1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,326172.6);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,171844.7);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,142774.5);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,68221.99);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,85736.74);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,30665.99);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,32695.66);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,17238.87);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,8017.308);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,5431.437);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,4404.455);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,13852.51);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,499.7066);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,1339.946);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,1022.541);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,41.50737);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(21,20.47555);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,68415.25);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,58884.04);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,38869.36);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,37366.51);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,23607.61);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,9282.266);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,23411.64);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,5722.62);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,24844.52);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,4023.48);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,14085.33);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,3634.615);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,1660.663);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,1750.717);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,1855.697);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,11538.94);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,290.9813);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,602.9572);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,538.3652);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,28.9915);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(21,20.47555);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(268271);

   ci = TColor::GetColor("#ff6600");
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
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(0,0.08982209);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,322550);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,237085.2);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,160011.9);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,109961.9);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,77270.65);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,55269.31);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,39780.9);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,28810.08);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,21035.43);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,15206.75);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,10921.91);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,7785.162);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,5454.485);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,3738.345);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,2519.225);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,1648.926);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,1014.33);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,598.7037);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,340.1204);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,171.7992);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,76.18887);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(22,29.99965);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(23,7.963961);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(24,1.460266);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(0,0.08982209);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,154.5159);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,133.4055);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,109.9124);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,91.27816);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,76.59011);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,64.84867);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,55.04807);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,46.87318);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,40.0863);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,34.09861);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,28.91332);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,24.42852);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,20.45825);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,16.94272);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,13.93373);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,11.24973);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,8.832075);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,6.784704);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,5.125871);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,3.621784);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,2.436095);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(22,1.517692);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(23,0.7747831);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(24,0.3420679);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(1.634337e+07);

   ci = TColor::GetColor("#990099");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
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
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
