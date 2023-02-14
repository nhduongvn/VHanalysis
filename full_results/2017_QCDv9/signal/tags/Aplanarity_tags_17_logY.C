#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Tue Feb 14 10:43:06 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2183529,0.3736337,1.171633,3.247051);
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
   st->SetMaximum(667.7316);
   
   TH1F *st_stack_62 = new TH1F("st_stack_62","",50,0,1);
   st_stack_62->SetMinimum(5.229302);
   st_stack_62->SetMaximum(911.4005);
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
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,4.984449);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,3.435878);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,2.455837);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,1.737938);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,1.206941);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,0.9408912);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,0.6249296);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,0.4800209);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,0.3326093);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,0.271227);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,0.1950111);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,0.1312309);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,0.08983423);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,0.06441012);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,0.05217774);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,0.01789363);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(17,0.01991799);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,0.008690399);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(19,0.007115748);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(20,0.00373852);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(22,0.001319221);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.09643799);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.08124603);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.06827463);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.05781926);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.04733475);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.04245054);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.03481602);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,0.02997903);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,0.02540691);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,0.02254901);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,0.01966058);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,0.01567298);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,0.0128618);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,0.01128775);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,0.009693434);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,0.006612319);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(17,0.006084814);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,0.003936422);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(19,0.003620202);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(20,0.002648609);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(22,0.001319221);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(9885);

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
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,1.692867);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,1.215927);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,0.7681128);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,0.514701);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,0.3535434);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,0.251561);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.167786);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.1195242);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.08515599);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.05440838);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.0389622);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.02563747);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.01772569);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.01013301);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.007111399);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,0.003564789);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.001612064);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(18,0.0008566117);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,0.001096885);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,0.0003777439);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(21,0.0004800258);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.02009997);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.01713817);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.01359848);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.01115513);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.009297936);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.007815455);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.006381222);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.005400426);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.004586966);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.003672937);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.00307273);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.002530758);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.00210651);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.001578629);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.001301516);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.0009294484);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.0006295211);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(18,0.0004323865);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,0.0005031549);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,0.0002761903);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(21,0.0003412046);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(23096);

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
